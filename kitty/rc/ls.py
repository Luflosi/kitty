#!/usr/bin/env python
# vim:fileencoding=utf-8
# License: GPLv3 Copyright: 2020, Kovid Goyal <kovid at kovidgoyal.net>

import json
from typing import Any, Dict, Optional

from kitty.constants import appname

from .base import (
    ArgsType, Boss, PayloadGetType, PayloadType, RCOptions, RemoteCommand,
    ResponseType, Window
)


class LS(RemoteCommand):
    '''
    No payload
    '''

    short_desc = 'List all tabs/windows'
    desc = (
        'List all windows. The list is returned as JSON tree. The top-level is a list of'
        f' operating system {appname} windows. Each OS window has an :italic:`id` and a list'
        ' of :italic:`tabs`. Each tab has its own :italic:`id`, a :italic:`title` and a list of :italic:`windows`.'
        ' Each window has an :italic:`id`, :italic:`title`, :italic:`current working directory`, :italic:`process id (PID)`, '
        ' :italic:`command-line` and :italic:`environment` of the process running in the window. Additionally, when'
        ' running the command inside a kitty window, that window can be identified by the :italic:`is_self` parameter.\n\n'
        'You can use these criteria to select windows/tabs for the other commands.'
    )
    argspec = ''

    def message_to_kitty(self, global_opts: RCOptions, opts: Any, args: ArgsType) -> PayloadType:
        pass

    def response_from_kitty(self, boss: Boss, window: Optional[Window], payload_get: PayloadGetType) -> ResponseType:

        def serialize_callback(w: Window, result: Dict[str, Any]) -> Dict[str, Any]:
            result['is_self'] = True
            return result

        if window is not None:
            orig_callback = window.serialize_callback
            window.serialize_callback = serialize_callback
        try:
            data = list(boss.list_os_windows())
        finally:
            if window is not None:
                window.serialize_callback = orig_callback
        return json.dumps(data, indent=2, sort_keys=True)


ls = LS()
