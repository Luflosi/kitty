// generated by gen-config.py DO NOT edit
// vim:fileencoding=utf-8
#pragma once
#include "to-c.h"



static void
convert_from_python_font_size(PyObject *val, Options *opts) {
    opts->font_size = PyFloat_AsDouble(val);
}

static void
convert_from_opts_font_size(PyObject *py_opts, Options *opts) {
    PyObject *ret = PyObject_GetAttrString(py_opts, "font_size");
    if (ret == NULL) return;
    convert_from_python_font_size(ret, opts);
    Py_DECREF(ret);
}

static void
convert_from_python_force_ltr(PyObject *val, Options *opts) {
    opts->force_ltr = PyObject_IsTrue(val);
}

static void
convert_from_opts_force_ltr(PyObject *py_opts, Options *opts) {
    PyObject *ret = PyObject_GetAttrString(py_opts, "force_ltr");
    if (ret == NULL) return;
    convert_from_python_force_ltr(ret, opts);
    Py_DECREF(ret);
}

static void
convert_from_python_adjust_line_height(PyObject *val, Options *opts) {
    adjust_line_height(val, opts);
}

static void
convert_from_opts_adjust_line_height(PyObject *py_opts, Options *opts) {
    PyObject *ret = PyObject_GetAttrString(py_opts, "adjust_line_height");
    if (ret == NULL) return;
    convert_from_python_adjust_line_height(ret, opts);
    Py_DECREF(ret);
}

static void
convert_from_python_adjust_column_width(PyObject *val, Options *opts) {
    adjust_column_width(val, opts);
}

static void
convert_from_opts_adjust_column_width(PyObject *py_opts, Options *opts) {
    PyObject *ret = PyObject_GetAttrString(py_opts, "adjust_column_width");
    if (ret == NULL) return;
    convert_from_python_adjust_column_width(ret, opts);
    Py_DECREF(ret);
}

static void
convert_from_python_adjust_baseline(PyObject *val, Options *opts) {
    adjust_baseline(val, opts);
}

static void
convert_from_opts_adjust_baseline(PyObject *py_opts, Options *opts) {
    PyObject *ret = PyObject_GetAttrString(py_opts, "adjust_baseline");
    if (ret == NULL) return;
    convert_from_python_adjust_baseline(ret, opts);
    Py_DECREF(ret);
}

static void
convert_from_python_disable_ligatures(PyObject *val, Options *opts) {
    opts->disable_ligatures = PyLong_AsLong(val);
}

static void
convert_from_opts_disable_ligatures(PyObject *py_opts, Options *opts) {
    PyObject *ret = PyObject_GetAttrString(py_opts, "disable_ligatures");
    if (ret == NULL) return;
    convert_from_python_disable_ligatures(ret, opts);
    Py_DECREF(ret);
}

static void
convert_from_python_cursor_shape(PyObject *val, Options *opts) {
    opts->cursor_shape = PyLong_AsLong(val);
}

static void
convert_from_opts_cursor_shape(PyObject *py_opts, Options *opts) {
    PyObject *ret = PyObject_GetAttrString(py_opts, "cursor_shape");
    if (ret == NULL) return;
    convert_from_python_cursor_shape(ret, opts);
    Py_DECREF(ret);
}

static void
convert_from_python_cursor_beam_thickness(PyObject *val, Options *opts) {
    opts->cursor_beam_thickness = PyFloat_AsFloat(val);
}

static void
convert_from_opts_cursor_beam_thickness(PyObject *py_opts, Options *opts) {
    PyObject *ret = PyObject_GetAttrString(py_opts, "cursor_beam_thickness");
    if (ret == NULL) return;
    convert_from_python_cursor_beam_thickness(ret, opts);
    Py_DECREF(ret);
}

static void
convert_from_python_cursor_underline_thickness(PyObject *val, Options *opts) {
    opts->cursor_underline_thickness = PyFloat_AsFloat(val);
}

static void
convert_from_opts_cursor_underline_thickness(PyObject *py_opts, Options *opts) {
    PyObject *ret = PyObject_GetAttrString(py_opts, "cursor_underline_thickness");
    if (ret == NULL) return;
    convert_from_python_cursor_underline_thickness(ret, opts);
    Py_DECREF(ret);
}

static void
convert_from_python_cursor_blink_interval(PyObject *val, Options *opts) {
    opts->cursor_blink_interval = parse_s_double_to_monotonic_t(val);
}

static void
convert_from_opts_cursor_blink_interval(PyObject *py_opts, Options *opts) {
    PyObject *ret = PyObject_GetAttrString(py_opts, "cursor_blink_interval");
    if (ret == NULL) return;
    convert_from_python_cursor_blink_interval(ret, opts);
    Py_DECREF(ret);
}

static void
convert_from_python_cursor_stop_blinking_after(PyObject *val, Options *opts) {
    opts->cursor_stop_blinking_after = parse_s_double_to_monotonic_t(val);
}

static void
convert_from_opts_cursor_stop_blinking_after(PyObject *py_opts, Options *opts) {
    PyObject *ret = PyObject_GetAttrString(py_opts, "cursor_stop_blinking_after");
    if (ret == NULL) return;
    convert_from_python_cursor_stop_blinking_after(ret, opts);
    Py_DECREF(ret);
}

static void
convert_from_python_scrollback_pager_history_size(PyObject *val, Options *opts) {
    opts->scrollback_pager_history_size = PyLong_AsUnsignedLong(val);
}

static void
convert_from_opts_scrollback_pager_history_size(PyObject *py_opts, Options *opts) {
    PyObject *ret = PyObject_GetAttrString(py_opts, "scrollback_pager_history_size");
    if (ret == NULL) return;
    convert_from_python_scrollback_pager_history_size(ret, opts);
    Py_DECREF(ret);
}

static void
convert_from_python_scrollback_fill_enlarged_window(PyObject *val, Options *opts) {
    opts->scrollback_fill_enlarged_window = PyObject_IsTrue(val);
}

static void
convert_from_opts_scrollback_fill_enlarged_window(PyObject *py_opts, Options *opts) {
    PyObject *ret = PyObject_GetAttrString(py_opts, "scrollback_fill_enlarged_window");
    if (ret == NULL) return;
    convert_from_python_scrollback_fill_enlarged_window(ret, opts);
    Py_DECREF(ret);
}

static void
convert_from_python_wheel_scroll_multiplier(PyObject *val, Options *opts) {
    opts->wheel_scroll_multiplier = PyFloat_AsDouble(val);
}

static void
convert_from_opts_wheel_scroll_multiplier(PyObject *py_opts, Options *opts) {
    PyObject *ret = PyObject_GetAttrString(py_opts, "wheel_scroll_multiplier");
    if (ret == NULL) return;
    convert_from_python_wheel_scroll_multiplier(ret, opts);
    Py_DECREF(ret);
}

static void
convert_from_python_touch_scroll_multiplier(PyObject *val, Options *opts) {
    opts->touch_scroll_multiplier = PyFloat_AsDouble(val);
}

static void
convert_from_opts_touch_scroll_multiplier(PyObject *py_opts, Options *opts) {
    PyObject *ret = PyObject_GetAttrString(py_opts, "touch_scroll_multiplier");
    if (ret == NULL) return;
    convert_from_python_touch_scroll_multiplier(ret, opts);
    Py_DECREF(ret);
}

static void
convert_from_python_mouse_hide_wait(PyObject *val, Options *opts) {
    opts->mouse_hide_wait = parse_s_double_to_monotonic_t(val);
}

static void
convert_from_opts_mouse_hide_wait(PyObject *py_opts, Options *opts) {
    PyObject *ret = PyObject_GetAttrString(py_opts, "mouse_hide_wait");
    if (ret == NULL) return;
    convert_from_python_mouse_hide_wait(ret, opts);
    Py_DECREF(ret);
}

static void
convert_from_python_url_color(PyObject *val, Options *opts) {
    opts->url_color = color_as_int(val);
}

static void
convert_from_opts_url_color(PyObject *py_opts, Options *opts) {
    PyObject *ret = PyObject_GetAttrString(py_opts, "url_color");
    if (ret == NULL) return;
    convert_from_python_url_color(ret, opts);
    Py_DECREF(ret);
}

static void
convert_from_python_url_style(PyObject *val, Options *opts) {
    opts->url_style = PyLong_AsUnsignedLong(val);
}

static void
convert_from_opts_url_style(PyObject *py_opts, Options *opts) {
    PyObject *ret = PyObject_GetAttrString(py_opts, "url_style");
    if (ret == NULL) return;
    convert_from_python_url_style(ret, opts);
    Py_DECREF(ret);
}

static void
convert_from_python_url_prefixes(PyObject *val, Options *opts) {
    url_prefixes(val, opts);
}

static void
convert_from_opts_url_prefixes(PyObject *py_opts, Options *opts) {
    PyObject *ret = PyObject_GetAttrString(py_opts, "url_prefixes");
    if (ret == NULL) return;
    convert_from_python_url_prefixes(ret, opts);
    Py_DECREF(ret);
}

static void
convert_from_python_detect_urls(PyObject *val, Options *opts) {
    opts->detect_urls = PyObject_IsTrue(val);
}

static void
convert_from_opts_detect_urls(PyObject *py_opts, Options *opts) {
    PyObject *ret = PyObject_GetAttrString(py_opts, "detect_urls");
    if (ret == NULL) return;
    convert_from_python_detect_urls(ret, opts);
    Py_DECREF(ret);
}

static void
convert_from_python_url_excluded_characters(PyObject *val, Options *opts) {
    url_excluded_characters(val, opts);
}

static void
convert_from_opts_url_excluded_characters(PyObject *py_opts, Options *opts) {
    PyObject *ret = PyObject_GetAttrString(py_opts, "url_excluded_characters");
    if (ret == NULL) return;
    convert_from_python_url_excluded_characters(ret, opts);
    Py_DECREF(ret);
}

static void
convert_from_python_select_by_word_characters(PyObject *val, Options *opts) {
    select_by_word_characters(val, opts);
}

static void
convert_from_opts_select_by_word_characters(PyObject *py_opts, Options *opts) {
    PyObject *ret = PyObject_GetAttrString(py_opts, "select_by_word_characters");
    if (ret == NULL) return;
    convert_from_python_select_by_word_characters(ret, opts);
    Py_DECREF(ret);
}

static void
convert_from_python_click_interval(PyObject *val, Options *opts) {
    opts->click_interval = parse_s_double_to_monotonic_t(val);
}

static void
convert_from_opts_click_interval(PyObject *py_opts, Options *opts) {
    PyObject *ret = PyObject_GetAttrString(py_opts, "click_interval");
    if (ret == NULL) return;
    convert_from_python_click_interval(ret, opts);
    Py_DECREF(ret);
}

static void
convert_from_python_focus_follows_mouse(PyObject *val, Options *opts) {
    opts->focus_follows_mouse = PyObject_IsTrue(val);
}

static void
convert_from_opts_focus_follows_mouse(PyObject *py_opts, Options *opts) {
    PyObject *ret = PyObject_GetAttrString(py_opts, "focus_follows_mouse");
    if (ret == NULL) return;
    convert_from_python_focus_follows_mouse(ret, opts);
    Py_DECREF(ret);
}

static void
convert_from_python_pointer_shape_when_grabbed(PyObject *val, Options *opts) {
    opts->pointer_shape_when_grabbed = pointer_shape(val);
}

static void
convert_from_opts_pointer_shape_when_grabbed(PyObject *py_opts, Options *opts) {
    PyObject *ret = PyObject_GetAttrString(py_opts, "pointer_shape_when_grabbed");
    if (ret == NULL) return;
    convert_from_python_pointer_shape_when_grabbed(ret, opts);
    Py_DECREF(ret);
}

static void
convert_from_python_default_pointer_shape(PyObject *val, Options *opts) {
    opts->default_pointer_shape = pointer_shape(val);
}

static void
convert_from_opts_default_pointer_shape(PyObject *py_opts, Options *opts) {
    PyObject *ret = PyObject_GetAttrString(py_opts, "default_pointer_shape");
    if (ret == NULL) return;
    convert_from_python_default_pointer_shape(ret, opts);
    Py_DECREF(ret);
}

static void
convert_from_python_pointer_shape_when_dragging(PyObject *val, Options *opts) {
    opts->pointer_shape_when_dragging = pointer_shape(val);
}

static void
convert_from_opts_pointer_shape_when_dragging(PyObject *py_opts, Options *opts) {
    PyObject *ret = PyObject_GetAttrString(py_opts, "pointer_shape_when_dragging");
    if (ret == NULL) return;
    convert_from_python_pointer_shape_when_dragging(ret, opts);
    Py_DECREF(ret);
}

static void
convert_from_python_repaint_delay(PyObject *val, Options *opts) {
    opts->repaint_delay = parse_ms_long_to_monotonic_t(val);
}

static void
convert_from_opts_repaint_delay(PyObject *py_opts, Options *opts) {
    PyObject *ret = PyObject_GetAttrString(py_opts, "repaint_delay");
    if (ret == NULL) return;
    convert_from_python_repaint_delay(ret, opts);
    Py_DECREF(ret);
}

static void
convert_from_python_input_delay(PyObject *val, Options *opts) {
    opts->input_delay = parse_ms_long_to_monotonic_t(val);
}

static void
convert_from_opts_input_delay(PyObject *py_opts, Options *opts) {
    PyObject *ret = PyObject_GetAttrString(py_opts, "input_delay");
    if (ret == NULL) return;
    convert_from_python_input_delay(ret, opts);
    Py_DECREF(ret);
}

static void
convert_from_python_sync_to_monitor(PyObject *val, Options *opts) {
    opts->sync_to_monitor = PyObject_IsTrue(val);
}

static void
convert_from_opts_sync_to_monitor(PyObject *py_opts, Options *opts) {
    PyObject *ret = PyObject_GetAttrString(py_opts, "sync_to_monitor");
    if (ret == NULL) return;
    convert_from_python_sync_to_monitor(ret, opts);
    Py_DECREF(ret);
}

static void
convert_from_python_enable_audio_bell(PyObject *val, Options *opts) {
    opts->enable_audio_bell = PyObject_IsTrue(val);
}

static void
convert_from_opts_enable_audio_bell(PyObject *py_opts, Options *opts) {
    PyObject *ret = PyObject_GetAttrString(py_opts, "enable_audio_bell");
    if (ret == NULL) return;
    convert_from_python_enable_audio_bell(ret, opts);
    Py_DECREF(ret);
}

static void
convert_from_python_visual_bell_duration(PyObject *val, Options *opts) {
    opts->visual_bell_duration = parse_s_double_to_monotonic_t(val);
}

static void
convert_from_opts_visual_bell_duration(PyObject *py_opts, Options *opts) {
    PyObject *ret = PyObject_GetAttrString(py_opts, "visual_bell_duration");
    if (ret == NULL) return;
    convert_from_python_visual_bell_duration(ret, opts);
    Py_DECREF(ret);
}

static void
convert_from_python_window_alert_on_bell(PyObject *val, Options *opts) {
    opts->window_alert_on_bell = PyObject_IsTrue(val);
}

static void
convert_from_opts_window_alert_on_bell(PyObject *py_opts, Options *opts) {
    PyObject *ret = PyObject_GetAttrString(py_opts, "window_alert_on_bell");
    if (ret == NULL) return;
    convert_from_python_window_alert_on_bell(ret, opts);
    Py_DECREF(ret);
}

static void
convert_from_python_active_border_color(PyObject *val, Options *opts) {
    opts->active_border_color = active_border_color(val);
}

static void
convert_from_opts_active_border_color(PyObject *py_opts, Options *opts) {
    PyObject *ret = PyObject_GetAttrString(py_opts, "active_border_color");
    if (ret == NULL) return;
    convert_from_python_active_border_color(ret, opts);
    Py_DECREF(ret);
}

static void
convert_from_python_inactive_border_color(PyObject *val, Options *opts) {
    opts->inactive_border_color = color_as_int(val);
}

static void
convert_from_opts_inactive_border_color(PyObject *py_opts, Options *opts) {
    PyObject *ret = PyObject_GetAttrString(py_opts, "inactive_border_color");
    if (ret == NULL) return;
    convert_from_python_inactive_border_color(ret, opts);
    Py_DECREF(ret);
}

static void
convert_from_python_bell_border_color(PyObject *val, Options *opts) {
    opts->bell_border_color = color_as_int(val);
}

static void
convert_from_opts_bell_border_color(PyObject *py_opts, Options *opts) {
    PyObject *ret = PyObject_GetAttrString(py_opts, "bell_border_color");
    if (ret == NULL) return;
    convert_from_python_bell_border_color(ret, opts);
    Py_DECREF(ret);
}

static void
convert_from_python_inactive_text_alpha(PyObject *val, Options *opts) {
    opts->inactive_text_alpha = PyFloat_AsFloat(val);
}

static void
convert_from_opts_inactive_text_alpha(PyObject *py_opts, Options *opts) {
    PyObject *ret = PyObject_GetAttrString(py_opts, "inactive_text_alpha");
    if (ret == NULL) return;
    convert_from_python_inactive_text_alpha(ret, opts);
    Py_DECREF(ret);
}

static void
convert_from_python_hide_window_decorations(PyObject *val, Options *opts) {
    opts->hide_window_decorations = PyLong_AsUnsignedLong(val);
}

static void
convert_from_opts_hide_window_decorations(PyObject *py_opts, Options *opts) {
    PyObject *ret = PyObject_GetAttrString(py_opts, "hide_window_decorations");
    if (ret == NULL) return;
    convert_from_python_hide_window_decorations(ret, opts);
    Py_DECREF(ret);
}

static void
convert_from_python_resize_debounce_time(PyObject *val, Options *opts) {
    opts->resize_debounce_time = parse_s_double_to_monotonic_t(val);
}

static void
convert_from_opts_resize_debounce_time(PyObject *py_opts, Options *opts) {
    PyObject *ret = PyObject_GetAttrString(py_opts, "resize_debounce_time");
    if (ret == NULL) return;
    convert_from_python_resize_debounce_time(ret, opts);
    Py_DECREF(ret);
}

static void
convert_from_python_resize_draw_strategy(PyObject *val, Options *opts) {
    opts->resize_draw_strategy = PyLong_AsLong(val);
}

static void
convert_from_opts_resize_draw_strategy(PyObject *py_opts, Options *opts) {
    PyObject *ret = PyObject_GetAttrString(py_opts, "resize_draw_strategy");
    if (ret == NULL) return;
    convert_from_python_resize_draw_strategy(ret, opts);
    Py_DECREF(ret);
}

static void
convert_from_python_resize_in_steps(PyObject *val, Options *opts) {
    opts->resize_in_steps = PyObject_IsTrue(val);
}

static void
convert_from_opts_resize_in_steps(PyObject *py_opts, Options *opts) {
    PyObject *ret = PyObject_GetAttrString(py_opts, "resize_in_steps");
    if (ret == NULL) return;
    convert_from_python_resize_in_steps(ret, opts);
    Py_DECREF(ret);
}

static void
convert_from_python_tab_bar_edge(PyObject *val, Options *opts) {
    opts->tab_bar_edge = PyLong_AsLong(val);
}

static void
convert_from_opts_tab_bar_edge(PyObject *py_opts, Options *opts) {
    PyObject *ret = PyObject_GetAttrString(py_opts, "tab_bar_edge");
    if (ret == NULL) return;
    convert_from_python_tab_bar_edge(ret, opts);
    Py_DECREF(ret);
}

static void
convert_from_python_tab_bar_margin_height(PyObject *val, Options *opts) {
    tab_bar_margin_height(val, opts);
}

static void
convert_from_opts_tab_bar_margin_height(PyObject *py_opts, Options *opts) {
    PyObject *ret = PyObject_GetAttrString(py_opts, "tab_bar_margin_height");
    if (ret == NULL) return;
    convert_from_python_tab_bar_margin_height(ret, opts);
    Py_DECREF(ret);
}

static void
convert_from_python_tab_bar_style(PyObject *val, Options *opts) {
    tab_bar_style(val, opts);
}

static void
convert_from_opts_tab_bar_style(PyObject *py_opts, Options *opts) {
    PyObject *ret = PyObject_GetAttrString(py_opts, "tab_bar_style");
    if (ret == NULL) return;
    convert_from_python_tab_bar_style(ret, opts);
    Py_DECREF(ret);
}

static void
convert_from_python_tab_bar_min_tabs(PyObject *val, Options *opts) {
    opts->tab_bar_min_tabs = PyLong_AsUnsignedLong(val);
}

static void
convert_from_opts_tab_bar_min_tabs(PyObject *py_opts, Options *opts) {
    PyObject *ret = PyObject_GetAttrString(py_opts, "tab_bar_min_tabs");
    if (ret == NULL) return;
    convert_from_python_tab_bar_min_tabs(ret, opts);
    Py_DECREF(ret);
}

static void
convert_from_python_foreground(PyObject *val, Options *opts) {
    opts->foreground = color_as_int(val);
}

static void
convert_from_opts_foreground(PyObject *py_opts, Options *opts) {
    PyObject *ret = PyObject_GetAttrString(py_opts, "foreground");
    if (ret == NULL) return;
    convert_from_python_foreground(ret, opts);
    Py_DECREF(ret);
}

static void
convert_from_python_background(PyObject *val, Options *opts) {
    opts->background = color_as_int(val);
}

static void
convert_from_opts_background(PyObject *py_opts, Options *opts) {
    PyObject *ret = PyObject_GetAttrString(py_opts, "background");
    if (ret == NULL) return;
    convert_from_python_background(ret, opts);
    Py_DECREF(ret);
}

static void
convert_from_python_background_opacity(PyObject *val, Options *opts) {
    opts->background_opacity = PyFloat_AsFloat(val);
}

static void
convert_from_opts_background_opacity(PyObject *py_opts, Options *opts) {
    PyObject *ret = PyObject_GetAttrString(py_opts, "background_opacity");
    if (ret == NULL) return;
    convert_from_python_background_opacity(ret, opts);
    Py_DECREF(ret);
}

static void
convert_from_python_background_image(PyObject *val, Options *opts) {
    background_image(val, opts);
}

static void
convert_from_opts_background_image(PyObject *py_opts, Options *opts) {
    PyObject *ret = PyObject_GetAttrString(py_opts, "background_image");
    if (ret == NULL) return;
    convert_from_python_background_image(ret, opts);
    Py_DECREF(ret);
}

static void
convert_from_python_background_image_layout(PyObject *val, Options *opts) {
    opts->background_image_layout = bglayout(val);
}

static void
convert_from_opts_background_image_layout(PyObject *py_opts, Options *opts) {
    PyObject *ret = PyObject_GetAttrString(py_opts, "background_image_layout");
    if (ret == NULL) return;
    convert_from_python_background_image_layout(ret, opts);
    Py_DECREF(ret);
}

static void
convert_from_python_background_image_linear(PyObject *val, Options *opts) {
    opts->background_image_linear = PyObject_IsTrue(val);
}

static void
convert_from_opts_background_image_linear(PyObject *py_opts, Options *opts) {
    PyObject *ret = PyObject_GetAttrString(py_opts, "background_image_linear");
    if (ret == NULL) return;
    convert_from_python_background_image_linear(ret, opts);
    Py_DECREF(ret);
}

static void
convert_from_python_dynamic_background_opacity(PyObject *val, Options *opts) {
    opts->dynamic_background_opacity = PyObject_IsTrue(val);
}

static void
convert_from_opts_dynamic_background_opacity(PyObject *py_opts, Options *opts) {
    PyObject *ret = PyObject_GetAttrString(py_opts, "dynamic_background_opacity");
    if (ret == NULL) return;
    convert_from_python_dynamic_background_opacity(ret, opts);
    Py_DECREF(ret);
}

static void
convert_from_python_background_tint(PyObject *val, Options *opts) {
    opts->background_tint = PyFloat_AsFloat(val);
}

static void
convert_from_opts_background_tint(PyObject *py_opts, Options *opts) {
    PyObject *ret = PyObject_GetAttrString(py_opts, "background_tint");
    if (ret == NULL) return;
    convert_from_python_background_tint(ret, opts);
    Py_DECREF(ret);
}

static void
convert_from_python_dim_opacity(PyObject *val, Options *opts) {
    opts->dim_opacity = PyFloat_AsFloat(val);
}

static void
convert_from_opts_dim_opacity(PyObject *py_opts, Options *opts) {
    PyObject *ret = PyObject_GetAttrString(py_opts, "dim_opacity");
    if (ret == NULL) return;
    convert_from_python_dim_opacity(ret, opts);
    Py_DECREF(ret);
}

static void
convert_from_python_mark1_foreground(PyObject *val, Options *opts) {
    opts->mark1_foreground = color_as_int(val);
}

static void
convert_from_opts_mark1_foreground(PyObject *py_opts, Options *opts) {
    PyObject *ret = PyObject_GetAttrString(py_opts, "mark1_foreground");
    if (ret == NULL) return;
    convert_from_python_mark1_foreground(ret, opts);
    Py_DECREF(ret);
}

static void
convert_from_python_mark1_background(PyObject *val, Options *opts) {
    opts->mark1_background = color_as_int(val);
}

static void
convert_from_opts_mark1_background(PyObject *py_opts, Options *opts) {
    PyObject *ret = PyObject_GetAttrString(py_opts, "mark1_background");
    if (ret == NULL) return;
    convert_from_python_mark1_background(ret, opts);
    Py_DECREF(ret);
}

static void
convert_from_python_mark2_foreground(PyObject *val, Options *opts) {
    opts->mark2_foreground = color_as_int(val);
}

static void
convert_from_opts_mark2_foreground(PyObject *py_opts, Options *opts) {
    PyObject *ret = PyObject_GetAttrString(py_opts, "mark2_foreground");
    if (ret == NULL) return;
    convert_from_python_mark2_foreground(ret, opts);
    Py_DECREF(ret);
}

static void
convert_from_python_mark2_background(PyObject *val, Options *opts) {
    opts->mark2_background = color_as_int(val);
}

static void
convert_from_opts_mark2_background(PyObject *py_opts, Options *opts) {
    PyObject *ret = PyObject_GetAttrString(py_opts, "mark2_background");
    if (ret == NULL) return;
    convert_from_python_mark2_background(ret, opts);
    Py_DECREF(ret);
}

static void
convert_from_python_mark3_foreground(PyObject *val, Options *opts) {
    opts->mark3_foreground = color_as_int(val);
}

static void
convert_from_opts_mark3_foreground(PyObject *py_opts, Options *opts) {
    PyObject *ret = PyObject_GetAttrString(py_opts, "mark3_foreground");
    if (ret == NULL) return;
    convert_from_python_mark3_foreground(ret, opts);
    Py_DECREF(ret);
}

static void
convert_from_python_mark3_background(PyObject *val, Options *opts) {
    opts->mark3_background = color_as_int(val);
}

static void
convert_from_opts_mark3_background(PyObject *py_opts, Options *opts) {
    PyObject *ret = PyObject_GetAttrString(py_opts, "mark3_background");
    if (ret == NULL) return;
    convert_from_python_mark3_background(ret, opts);
    Py_DECREF(ret);
}

static void
convert_from_python_close_on_child_death(PyObject *val, Options *opts) {
    opts->close_on_child_death = PyObject_IsTrue(val);
}

static void
convert_from_opts_close_on_child_death(PyObject *py_opts, Options *opts) {
    PyObject *ret = PyObject_GetAttrString(py_opts, "close_on_child_death");
    if (ret == NULL) return;
    convert_from_python_close_on_child_death(ret, opts);
    Py_DECREF(ret);
}

static void
convert_from_python_allow_hyperlinks(PyObject *val, Options *opts) {
    opts->allow_hyperlinks = PyObject_IsTrue(val);
}

static void
convert_from_opts_allow_hyperlinks(PyObject *py_opts, Options *opts) {
    PyObject *ret = PyObject_GetAttrString(py_opts, "allow_hyperlinks");
    if (ret == NULL) return;
    convert_from_python_allow_hyperlinks(ret, opts);
    Py_DECREF(ret);
}

static void
convert_from_python_macos_option_as_alt(PyObject *val, Options *opts) {
    opts->macos_option_as_alt = PyLong_AsUnsignedLong(val);
}

static void
convert_from_opts_macos_option_as_alt(PyObject *py_opts, Options *opts) {
    PyObject *ret = PyObject_GetAttrString(py_opts, "macos_option_as_alt");
    if (ret == NULL) return;
    convert_from_python_macos_option_as_alt(ret, opts);
    Py_DECREF(ret);
}

static void
convert_from_python_macos_hide_from_tasks(PyObject *val, Options *opts) {
    opts->macos_hide_from_tasks = PyObject_IsTrue(val);
}

static void
convert_from_opts_macos_hide_from_tasks(PyObject *py_opts, Options *opts) {
    PyObject *ret = PyObject_GetAttrString(py_opts, "macos_hide_from_tasks");
    if (ret == NULL) return;
    convert_from_python_macos_hide_from_tasks(ret, opts);
    Py_DECREF(ret);
}

static void
convert_from_python_macos_quit_when_last_window_closed(PyObject *val, Options *opts) {
    opts->macos_quit_when_last_window_closed = PyObject_IsTrue(val);
}

static void
convert_from_opts_macos_quit_when_last_window_closed(PyObject *py_opts, Options *opts) {
    PyObject *ret = PyObject_GetAttrString(py_opts, "macos_quit_when_last_window_closed");
    if (ret == NULL) return;
    convert_from_python_macos_quit_when_last_window_closed(ret, opts);
    Py_DECREF(ret);
}

static void
convert_from_python_macos_window_resizable(PyObject *val, Options *opts) {
    opts->macos_window_resizable = PyObject_IsTrue(val);
}

static void
convert_from_opts_macos_window_resizable(PyObject *py_opts, Options *opts) {
    PyObject *ret = PyObject_GetAttrString(py_opts, "macos_window_resizable");
    if (ret == NULL) return;
    convert_from_python_macos_window_resizable(ret, opts);
    Py_DECREF(ret);
}

static void
convert_from_python_macos_thicken_font(PyObject *val, Options *opts) {
    opts->macos_thicken_font = PyFloat_AsFloat(val);
}

static void
convert_from_opts_macos_thicken_font(PyObject *py_opts, Options *opts) {
    PyObject *ret = PyObject_GetAttrString(py_opts, "macos_thicken_font");
    if (ret == NULL) return;
    convert_from_python_macos_thicken_font(ret, opts);
    Py_DECREF(ret);
}

static void
convert_from_python_macos_traditional_fullscreen(PyObject *val, Options *opts) {
    opts->macos_traditional_fullscreen = PyObject_IsTrue(val);
}

static void
convert_from_opts_macos_traditional_fullscreen(PyObject *py_opts, Options *opts) {
    PyObject *ret = PyObject_GetAttrString(py_opts, "macos_traditional_fullscreen");
    if (ret == NULL) return;
    convert_from_python_macos_traditional_fullscreen(ret, opts);
    Py_DECREF(ret);
}

static void
convert_from_python_macos_show_window_title_in(PyObject *val, Options *opts) {
    opts->macos_show_window_title_in = window_title_in(val);
}

static void
convert_from_opts_macos_show_window_title_in(PyObject *py_opts, Options *opts) {
    PyObject *ret = PyObject_GetAttrString(py_opts, "macos_show_window_title_in");
    if (ret == NULL) return;
    convert_from_python_macos_show_window_title_in(ret, opts);
    Py_DECREF(ret);
}

static bool
convert_opts_from_python_opts(PyObject *py_opts, Options *opts) {
    convert_from_opts_font_size(py_opts, opts);
    if (PyErr_Occurred()) return false;
    convert_from_opts_force_ltr(py_opts, opts);
    if (PyErr_Occurred()) return false;
    convert_from_opts_adjust_line_height(py_opts, opts);
    if (PyErr_Occurred()) return false;
    convert_from_opts_adjust_column_width(py_opts, opts);
    if (PyErr_Occurred()) return false;
    convert_from_opts_adjust_baseline(py_opts, opts);
    if (PyErr_Occurred()) return false;
    convert_from_opts_disable_ligatures(py_opts, opts);
    if (PyErr_Occurred()) return false;
    convert_from_opts_cursor_shape(py_opts, opts);
    if (PyErr_Occurred()) return false;
    convert_from_opts_cursor_beam_thickness(py_opts, opts);
    if (PyErr_Occurred()) return false;
    convert_from_opts_cursor_underline_thickness(py_opts, opts);
    if (PyErr_Occurred()) return false;
    convert_from_opts_cursor_blink_interval(py_opts, opts);
    if (PyErr_Occurred()) return false;
    convert_from_opts_cursor_stop_blinking_after(py_opts, opts);
    if (PyErr_Occurred()) return false;
    convert_from_opts_scrollback_pager_history_size(py_opts, opts);
    if (PyErr_Occurred()) return false;
    convert_from_opts_scrollback_fill_enlarged_window(py_opts, opts);
    if (PyErr_Occurred()) return false;
    convert_from_opts_wheel_scroll_multiplier(py_opts, opts);
    if (PyErr_Occurred()) return false;
    convert_from_opts_touch_scroll_multiplier(py_opts, opts);
    if (PyErr_Occurred()) return false;
    convert_from_opts_mouse_hide_wait(py_opts, opts);
    if (PyErr_Occurred()) return false;
    convert_from_opts_url_color(py_opts, opts);
    if (PyErr_Occurred()) return false;
    convert_from_opts_url_style(py_opts, opts);
    if (PyErr_Occurred()) return false;
    convert_from_opts_url_prefixes(py_opts, opts);
    if (PyErr_Occurred()) return false;
    convert_from_opts_detect_urls(py_opts, opts);
    if (PyErr_Occurred()) return false;
    convert_from_opts_url_excluded_characters(py_opts, opts);
    if (PyErr_Occurred()) return false;
    convert_from_opts_select_by_word_characters(py_opts, opts);
    if (PyErr_Occurred()) return false;
    convert_from_opts_click_interval(py_opts, opts);
    if (PyErr_Occurred()) return false;
    convert_from_opts_focus_follows_mouse(py_opts, opts);
    if (PyErr_Occurred()) return false;
    convert_from_opts_pointer_shape_when_grabbed(py_opts, opts);
    if (PyErr_Occurred()) return false;
    convert_from_opts_default_pointer_shape(py_opts, opts);
    if (PyErr_Occurred()) return false;
    convert_from_opts_pointer_shape_when_dragging(py_opts, opts);
    if (PyErr_Occurred()) return false;
    convert_from_opts_repaint_delay(py_opts, opts);
    if (PyErr_Occurred()) return false;
    convert_from_opts_input_delay(py_opts, opts);
    if (PyErr_Occurred()) return false;
    convert_from_opts_sync_to_monitor(py_opts, opts);
    if (PyErr_Occurred()) return false;
    convert_from_opts_enable_audio_bell(py_opts, opts);
    if (PyErr_Occurred()) return false;
    convert_from_opts_visual_bell_duration(py_opts, opts);
    if (PyErr_Occurred()) return false;
    convert_from_opts_window_alert_on_bell(py_opts, opts);
    if (PyErr_Occurred()) return false;
    convert_from_opts_active_border_color(py_opts, opts);
    if (PyErr_Occurred()) return false;
    convert_from_opts_inactive_border_color(py_opts, opts);
    if (PyErr_Occurred()) return false;
    convert_from_opts_bell_border_color(py_opts, opts);
    if (PyErr_Occurred()) return false;
    convert_from_opts_inactive_text_alpha(py_opts, opts);
    if (PyErr_Occurred()) return false;
    convert_from_opts_hide_window_decorations(py_opts, opts);
    if (PyErr_Occurred()) return false;
    convert_from_opts_resize_debounce_time(py_opts, opts);
    if (PyErr_Occurred()) return false;
    convert_from_opts_resize_draw_strategy(py_opts, opts);
    if (PyErr_Occurred()) return false;
    convert_from_opts_resize_in_steps(py_opts, opts);
    if (PyErr_Occurred()) return false;
    convert_from_opts_tab_bar_edge(py_opts, opts);
    if (PyErr_Occurred()) return false;
    convert_from_opts_tab_bar_margin_height(py_opts, opts);
    if (PyErr_Occurred()) return false;
    convert_from_opts_tab_bar_style(py_opts, opts);
    if (PyErr_Occurred()) return false;
    convert_from_opts_tab_bar_min_tabs(py_opts, opts);
    if (PyErr_Occurred()) return false;
    convert_from_opts_foreground(py_opts, opts);
    if (PyErr_Occurred()) return false;
    convert_from_opts_background(py_opts, opts);
    if (PyErr_Occurred()) return false;
    convert_from_opts_background_opacity(py_opts, opts);
    if (PyErr_Occurred()) return false;
    convert_from_opts_background_image(py_opts, opts);
    if (PyErr_Occurred()) return false;
    convert_from_opts_background_image_layout(py_opts, opts);
    if (PyErr_Occurred()) return false;
    convert_from_opts_background_image_linear(py_opts, opts);
    if (PyErr_Occurred()) return false;
    convert_from_opts_dynamic_background_opacity(py_opts, opts);
    if (PyErr_Occurred()) return false;
    convert_from_opts_background_tint(py_opts, opts);
    if (PyErr_Occurred()) return false;
    convert_from_opts_dim_opacity(py_opts, opts);
    if (PyErr_Occurred()) return false;
    convert_from_opts_mark1_foreground(py_opts, opts);
    if (PyErr_Occurred()) return false;
    convert_from_opts_mark1_background(py_opts, opts);
    if (PyErr_Occurred()) return false;
    convert_from_opts_mark2_foreground(py_opts, opts);
    if (PyErr_Occurred()) return false;
    convert_from_opts_mark2_background(py_opts, opts);
    if (PyErr_Occurred()) return false;
    convert_from_opts_mark3_foreground(py_opts, opts);
    if (PyErr_Occurred()) return false;
    convert_from_opts_mark3_background(py_opts, opts);
    if (PyErr_Occurred()) return false;
    convert_from_opts_close_on_child_death(py_opts, opts);
    if (PyErr_Occurred()) return false;
    convert_from_opts_allow_hyperlinks(py_opts, opts);
    if (PyErr_Occurred()) return false;
    convert_from_opts_macos_option_as_alt(py_opts, opts);
    if (PyErr_Occurred()) return false;
    convert_from_opts_macos_hide_from_tasks(py_opts, opts);
    if (PyErr_Occurred()) return false;
    convert_from_opts_macos_quit_when_last_window_closed(py_opts, opts);
    if (PyErr_Occurred()) return false;
    convert_from_opts_macos_window_resizable(py_opts, opts);
    if (PyErr_Occurred()) return false;
    convert_from_opts_macos_thicken_font(py_opts, opts);
    if (PyErr_Occurred()) return false;
    convert_from_opts_macos_traditional_fullscreen(py_opts, opts);
    if (PyErr_Occurred()) return false;
    convert_from_opts_macos_show_window_title_in(py_opts, opts);
    if (PyErr_Occurred()) return false;
    return true;
}
