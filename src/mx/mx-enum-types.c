
/* Generated data (by glib-mkenums) */

#include "mx-enum-types.h"
/* enumerations from "../mx/mx-actor-manager.h" */
#include "../mx/mx-actor-manager.h"
GType
mx_actor_manager_error_get_type(void) {
  static GType enum_type_id = 0;
  if (G_UNLIKELY (!enum_type_id))
    {
      static const GEnumValue values[] = {
        { MX_ACTOR_MANAGER_CONTAINER_DESTROYED, "MX_ACTOR_MANAGER_CONTAINER_DESTROYED", "container-destroyed" },
        { MX_ACTOR_MANAGER_ACTOR_DESTROYED, "MX_ACTOR_MANAGER_ACTOR_DESTROYED", "actor-destroyed" },
        { MX_ACTOR_MANAGER_CREATION_FAILED, "MX_ACTOR_MANAGER_CREATION_FAILED", "creation-failed" },
        { MX_ACTOR_MANAGER_UNKNOWN_OPERATION, "MX_ACTOR_MANAGER_UNKNOWN_OPERATION", "unknown-operation" },
        { 0, NULL, NULL }
      };
      enum_type_id = g_enum_register_static (g_intern_static_string ("MxActorManagerError"), values);
    }
  return enum_type_id;
}
/* enumerations from "../mx/mx-application.h" */
#include "../mx/mx-application.h"
GType
mx_application_flags_get_type(void) {
  static GType enum_type_id = 0;
  if (G_UNLIKELY (!enum_type_id))
    {
      static const GFlagsValue values[] = {
        { MX_APPLICATION_SINGLE_INSTANCE, "MX_APPLICATION_SINGLE_INSTANCE", "single-instance" },
        { MX_APPLICATION_KEEP_ALIVE, "MX_APPLICATION_KEEP_ALIVE", "keep-alive" },
        { 0, NULL, NULL }
      };
      enum_type_id = g_flags_register_static (g_intern_static_string ("MxApplicationFlags"), values);
    }
  return enum_type_id;
}
/* enumerations from "../mx/mx-draggable.h" */
#include "../mx/mx-draggable.h"
GType
mx_drag_axis_get_type(void) {
  static GType enum_type_id = 0;
  if (G_UNLIKELY (!enum_type_id))
    {
      static const GEnumValue values[] = {
        { MX_DRAG_AXIS_NONE, "MX_DRAG_AXIS_NONE", "none" },
        { MX_DRAG_AXIS_X, "MX_DRAG_AXIS_X", "x" },
        { MX_DRAG_AXIS_Y, "MX_DRAG_AXIS_Y", "y" },
        { 0, NULL, NULL }
      };
      enum_type_id = g_enum_register_static (g_intern_static_string ("MxDragAxis"), values);
    }
  return enum_type_id;
}
/* enumerations from "../mx/mx-focusable.h" */
#include "../mx/mx-focusable.h"
GType
mx_focus_direction_get_type(void) {
  static GType enum_type_id = 0;
  if (G_UNLIKELY (!enum_type_id))
    {
      static const GEnumValue values[] = {
        { MX_FOCUS_DIRECTION_OUT, "MX_FOCUS_DIRECTION_OUT", "out" },
        { MX_FOCUS_DIRECTION_UP, "MX_FOCUS_DIRECTION_UP", "up" },
        { MX_FOCUS_DIRECTION_DOWN, "MX_FOCUS_DIRECTION_DOWN", "down" },
        { MX_FOCUS_DIRECTION_LEFT, "MX_FOCUS_DIRECTION_LEFT", "left" },
        { MX_FOCUS_DIRECTION_RIGHT, "MX_FOCUS_DIRECTION_RIGHT", "right" },
        { MX_FOCUS_DIRECTION_NEXT, "MX_FOCUS_DIRECTION_NEXT", "next" },
        { MX_FOCUS_DIRECTION_PREVIOUS, "MX_FOCUS_DIRECTION_PREVIOUS", "previous" },
        { 0, NULL, NULL }
      };
      enum_type_id = g_enum_register_static (g_intern_static_string ("MxFocusDirection"), values);
    }
  return enum_type_id;
}
GType
mx_focus_hint_get_type(void) {
  static GType enum_type_id = 0;
  if (G_UNLIKELY (!enum_type_id))
    {
      static const GEnumValue values[] = {
        { MX_FOCUS_HINT_FIRST, "MX_FOCUS_HINT_FIRST", "first" },
        { MX_FOCUS_HINT_LAST, "MX_FOCUS_HINT_LAST", "last" },
        { MX_FOCUS_HINT_PRIOR, "MX_FOCUS_HINT_PRIOR", "prior" },
        { MX_FOCUS_HINT_FROM_ABOVE, "MX_FOCUS_HINT_FROM_ABOVE", "from-above" },
        { MX_FOCUS_HINT_FROM_BELOW, "MX_FOCUS_HINT_FROM_BELOW", "from-below" },
        { MX_FOCUS_HINT_FROM_LEFT, "MX_FOCUS_HINT_FROM_LEFT", "from-left" },
        { MX_FOCUS_HINT_FROM_RIGHT, "MX_FOCUS_HINT_FROM_RIGHT", "from-right" },
        { 0, NULL, NULL }
      };
      enum_type_id = g_enum_register_static (g_intern_static_string ("MxFocusHint"), values);
    }
  return enum_type_id;
}
/* enumerations from "../mx/mx-image.h" */
#include "../mx/mx-image.h"
GType
mx_image_error_get_type(void) {
  static GType enum_type_id = 0;
  if (G_UNLIKELY (!enum_type_id))
    {
      static const GEnumValue values[] = {
        { MX_IMAGE_ERROR_BAD_FORMAT, "MX_IMAGE_ERROR_BAD_FORMAT", "bad-format" },
        { MX_IMAGE_ERROR_NO_ASYNC, "MX_IMAGE_ERROR_NO_ASYNC", "no-async" },
        { MX_IMAGE_ERROR_INTERNAL, "MX_IMAGE_ERROR_INTERNAL", "internal" },
        { MX_IMAGE_ERROR_INVALID_PARAMETER, "MX_IMAGE_ERROR_INVALID_PARAMETER", "invalid-parameter" },
        { 0, NULL, NULL }
      };
      enum_type_id = g_enum_register_static (g_intern_static_string ("MxImageError"), values);
    }
  return enum_type_id;
}
/* enumerations from "../mx/mx-stylable.h" */
#include "../mx/mx-stylable.h"
GType
mx_style_changed_flags_get_type(void) {
  static GType enum_type_id = 0;
  if (G_UNLIKELY (!enum_type_id))
    {
      static const GFlagsValue values[] = {
        { MX_STYLE_CHANGED_NONE, "MX_STYLE_CHANGED_NONE", "none" },
        { MX_STYLE_CHANGED_FORCE, "MX_STYLE_CHANGED_FORCE", "force" },
        { MX_STYLE_CHANGED_INVALIDATE_CACHE, "MX_STYLE_CHANGED_INVALIDATE_CACHE", "invalidate-cache" },
        { 0, NULL, NULL }
      };
      enum_type_id = g_flags_register_static (g_intern_static_string ("MxStyleChangedFlags"), values);
    }
  return enum_type_id;
}
/* enumerations from "../mx/mx-style.h" */
#include "../mx/mx-style.h"
GType
mx_style_error_get_type(void) {
  static GType enum_type_id = 0;
  if (G_UNLIKELY (!enum_type_id))
    {
      static const GEnumValue values[] = {
        { MX_STYLE_ERROR_INVALID_FILE, "MX_STYLE_ERROR_INVALID_FILE", "invalid-file" },
        { 0, NULL, NULL }
      };
      enum_type_id = g_enum_register_static (g_intern_static_string ("MxStyleError"), values);
    }
  return enum_type_id;
}
/* enumerations from "../mx/mx-types.h" */
#include "../mx/mx-types.h"
GType
mx_align_get_type(void) {
  static GType enum_type_id = 0;
  if (G_UNLIKELY (!enum_type_id))
    {
      static const GEnumValue values[] = {
        { MX_ALIGN_START, "MX_ALIGN_START", "start" },
        { MX_ALIGN_MIDDLE, "MX_ALIGN_MIDDLE", "middle" },
        { MX_ALIGN_END, "MX_ALIGN_END", "end" },
        { 0, NULL, NULL }
      };
      enum_type_id = g_enum_register_static (g_intern_static_string ("MxAlign"), values);
    }
  return enum_type_id;
}
GType
mx_font_weight_get_type(void) {
  static GType enum_type_id = 0;
  if (G_UNLIKELY (!enum_type_id))
    {
      static const GEnumValue values[] = {
        { MX_FONT_WEIGHT_NORMAL, "MX_FONT_WEIGHT_NORMAL", "normal" },
        { MX_FONT_WEIGHT_BOLD, "MX_FONT_WEIGHT_BOLD", "bold" },
        { MX_FONT_WEIGHT_BOLDER, "MX_FONT_WEIGHT_BOLDER", "bolder" },
        { MX_FONT_WEIGHT_LIGHTER, "MX_FONT_WEIGHT_LIGHTER", "lighter" },
        { 0, NULL, NULL }
      };
      enum_type_id = g_enum_register_static (g_intern_static_string ("MxFontWeight"), values);
    }
  return enum_type_id;
}
GType
mx_scroll_policy_get_type(void) {
  static GType enum_type_id = 0;
  if (G_UNLIKELY (!enum_type_id))
    {
      static const GEnumValue values[] = {
        { MX_SCROLL_POLICY_NONE, "MX_SCROLL_POLICY_NONE", "none" },
        { MX_SCROLL_POLICY_HORIZONTAL, "MX_SCROLL_POLICY_HORIZONTAL", "horizontal" },
        { MX_SCROLL_POLICY_VERTICAL, "MX_SCROLL_POLICY_VERTICAL", "vertical" },
        { MX_SCROLL_POLICY_BOTH, "MX_SCROLL_POLICY_BOTH", "both" },
        { 0, NULL, NULL }
      };
      enum_type_id = g_enum_register_static (g_intern_static_string ("MxScrollPolicy"), values);
    }
  return enum_type_id;
}
GType
mx_orientation_get_type(void) {
  static GType enum_type_id = 0;
  if (G_UNLIKELY (!enum_type_id))
    {
      static const GEnumValue values[] = {
        { MX_ORIENTATION_HORIZONTAL, "MX_ORIENTATION_HORIZONTAL", "horizontal" },
        { MX_ORIENTATION_VERTICAL, "MX_ORIENTATION_VERTICAL", "vertical" },
        { 0, NULL, NULL }
      };
      enum_type_id = g_enum_register_static (g_intern_static_string ("MxOrientation"), values);
    }
  return enum_type_id;
}
GType
mx_window_rotation_get_type(void) {
  static GType enum_type_id = 0;
  if (G_UNLIKELY (!enum_type_id))
    {
      static const GEnumValue values[] = {
        { MX_WINDOW_ROTATION_0, "MX_WINDOW_ROTATION_0", "0" },
        { MX_WINDOW_ROTATION_90, "MX_WINDOW_ROTATION_90", "90" },
        { MX_WINDOW_ROTATION_180, "MX_WINDOW_ROTATION_180", "180" },
        { MX_WINDOW_ROTATION_270, "MX_WINDOW_ROTATION_270", "270" },
        { 0, NULL, NULL }
      };
      enum_type_id = g_enum_register_static (g_intern_static_string ("MxWindowRotation"), values);
    }
  return enum_type_id;
}
GType
mx_position_get_type(void) {
  static GType enum_type_id = 0;
  if (G_UNLIKELY (!enum_type_id))
    {
      static const GEnumValue values[] = {
        { MX_POSITION_TOP, "MX_POSITION_TOP", "top" },
        { MX_POSITION_RIGHT, "MX_POSITION_RIGHT", "right" },
        { MX_POSITION_BOTTOM, "MX_POSITION_BOTTOM", "bottom" },
        { MX_POSITION_LEFT, "MX_POSITION_LEFT", "left" },
        { 0, NULL, NULL }
      };
      enum_type_id = g_enum_register_static (g_intern_static_string ("MxPosition"), values);
    }
  return enum_type_id;
}
GType
mx_image_scale_mode_get_type(void) {
  static GType enum_type_id = 0;
  if (G_UNLIKELY (!enum_type_id))
    {
      static const GEnumValue values[] = {
        { MX_IMAGE_SCALE_NONE, "MX_IMAGE_SCALE_NONE", "none" },
        { MX_IMAGE_SCALE_FIT, "MX_IMAGE_SCALE_FIT", "fit" },
        { MX_IMAGE_SCALE_CROP, "MX_IMAGE_SCALE_CROP", "crop" },
        { 0, NULL, NULL }
      };
      enum_type_id = g_enum_register_static (g_intern_static_string ("MxImageScaleMode"), values);
    }
  return enum_type_id;
}
GType
mx_tooltip_animation_get_type(void) {
  static GType enum_type_id = 0;
  if (G_UNLIKELY (!enum_type_id))
    {
      static const GEnumValue values[] = {
        { MX_TOOLTIP_ANIMATION_BOUNCE, "MX_TOOLTIP_ANIMATION_BOUNCE", "bounce" },
        { MX_TOOLTIP_ANIMATION_FADE, "MX_TOOLTIP_ANIMATION_FADE", "fade" },
        { 0, NULL, NULL }
      };
      enum_type_id = g_enum_register_static (g_intern_static_string ("MxTooltipAnimation"), values);
    }
  return enum_type_id;
}
/* enumerations from "../mx/mx-widget.h" */
#include "../mx/mx-widget.h"
GType
mx_long_press_action_get_type(void) {
  static GType enum_type_id = 0;
  if (G_UNLIKELY (!enum_type_id))
    {
      static const GEnumValue values[] = {
        { MX_LONG_PRESS_QUERY, "MX_LONG_PRESS_QUERY", "query" },
        { MX_LONG_PRESS_ACTION, "MX_LONG_PRESS_ACTION", "action" },
        { MX_LONG_PRESS_CANCEL, "MX_LONG_PRESS_CANCEL", "cancel" },
        { 0, NULL, NULL }
      };
      enum_type_id = g_enum_register_static (g_intern_static_string ("MxLongPressAction"), values);
    }
  return enum_type_id;
}
/* enumerations from "../mx/mx-kinetic-scroll-view.h" */
#include "../mx/mx-kinetic-scroll-view.h"
GType
mx_kinetic_scroll_view_state_get_type(void) {
  static GType enum_type_id = 0;
  if (G_UNLIKELY (!enum_type_id))
    {
      static const GEnumValue values[] = {
        { MX_KINETIC_SCROLL_VIEW_STATE_IDLE, "MX_KINETIC_SCROLL_VIEW_STATE_IDLE", "idle" },
        { MX_KINETIC_SCROLL_VIEW_STATE_PANNING, "MX_KINETIC_SCROLL_VIEW_STATE_PANNING", "panning" },
        { MX_KINETIC_SCROLL_VIEW_STATE_SCROLLING, "MX_KINETIC_SCROLL_VIEW_STATE_SCROLLING", "scrolling" },
        { MX_KINETIC_SCROLL_VIEW_STATE_CLAMPING, "MX_KINETIC_SCROLL_VIEW_STATE_CLAMPING", "clamping" },
        { 0, NULL, NULL }
      };
      enum_type_id = g_enum_register_static (g_intern_static_string ("MxKineticScrollViewState"), values);
    }
  return enum_type_id;
}

/* Generated data ends here */

