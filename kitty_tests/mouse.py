#!/usr/bin/env python3
# vim:fileencoding=utf-8
# License: GPL v3 Copyright: 2016, Kovid Goyal <kovid at kovidgoyal.net>

from functools import partial

from kitty.fast_data_types import (
    GLFW_MOD_ALT, GLFW_MOD_CONTROL, GLFW_MOUSE_BUTTON_LEFT, create_mock_window,
    send_mock_mouse_event_to_window
)

from . import BaseTest


def send_mouse_event(
    window,
    button=-1,
    modifiers=0,
    is_release=False,
    x=0,
    y=0,
    clear_click_queue=False
):
    send_mock_mouse_event_to_window(
        window, button, modifiers, is_release, x, y, clear_click_queue
    )


class TestMouse(BaseTest):

    def test_mouse_selection(self):
        s = self.create_screen(
            options=dict(
                rectangle_select_modifiers=GLFW_MOD_ALT | GLFW_MOD_CONTROL
            )
        )
        w = create_mock_window(s)
        ev = partial(send_mouse_event, w)

        def sel():
            return ''.join(s.text_for_selection())

        def init():
            s.reset()
            s.draw('pqrst')
            s.draw('uvwxy')
            s.draw('ABCDE')
            s.draw('FGHIJ')
            s.draw('KLMNO')
            s.draw('12345')
            s.draw('67890')
            s.draw('abcde')
            s.draw('fghij')
            s.draw('klmno')

        def press(x=0, y=0, modifiers=0):
            ev(GLFW_MOUSE_BUTTON_LEFT, x=x, y=y, modifiers=modifiers)

        def release(x=0, y=0):
            ev(
                GLFW_MOUSE_BUTTON_LEFT,
                x=x,
                y=y,
                is_release=True,
                clear_click_queue=True
            )

        def move(x=0, y=0, button=-1):
            ev(x=x, y=y, button=button)

        def multi_click(x=0, y=0, count=2):
            while count > 0:
                count -= 1
                ev(GLFW_MOUSE_BUTTON_LEFT, x=x, y=y)

        def scroll(x=0, y=0, up=True):
            move(x=x, y=y, button=-2 if up else -3)

        # Simple, click, move, release test
        init()
        press()
        move(x=3)
        self.ae(sel(), '1234')
        release(x=3)
        self.ae(sel(), '1234')

        # Multi-line click release
        init()
        press(1, 1), release(3, 2)
        self.ae(sel(), '7890abcd')
        press(3, 4), release(2, 2)
        self.ae(sel(), 'cdefghijklmn')

        # Word select with drag
        s.reset()
        s.draw('ab cd')
        s.draw(' f gh')
        s.draw(' stuv')
        s.draw('X Y')
        multi_click(x=1)
        self.ae(sel(), 'ab')
        move(3)
        self.ae(sel(), 'ab cd')
        release(3, 1)
        self.ae(sel(), 'ab cd f gh')
        multi_click(x=1, y=2)
        self.ae(sel(), 'stuvX')
        release()

        # Line select with drag
        s.reset()
        s.draw('1 2 3')
        s.linefeed(), s.carriage_return()
        s.draw('4 5 6')
        s.linefeed(), s.carriage_return()
        s.draw('7 8 9X')
        multi_click(x=1, count=3)
        self.ae(sel(), str(s.line(0)))
        move(y=1)
        self.ae(sel(), '1 2 3\n4 5 6')
        move(y=2)
        self.ae(sel(), '1 2 3\n4 5 6\n7 8 9X')
        move(y=1)
        self.ae(sel(), '1 2 3\n4 5 6')
        move()
        self.ae(sel(), str(s.line(0)))
        release()

        # Rectangle select
        init()
        press(x=1, y=1, modifiers=GLFW_MOD_ALT | GLFW_MOD_CONTROL)
        move(x=3, y=3)
        self.ae(sel(), '789bcdghi')
        release()

        # scrolling
        init()
        press(x=1)
        scroll(x=1)
        self.ae(sel(), 'LMNO12')
        scroll(x=1)
        self.ae(sel(), 'GHIJKLMNO12')
        scroll(x=1, up=False)
        self.ae(sel(), 'LMNO12')
        scroll(x=2, up=False)
        self.ae(sel(), '23')
        release()
