#pragma once

#undef TAPPING_TERM
#define TAPPING_TERM 150

#define FLOW_TAP_TERM 150

#define COMBO_TERM 35
#define COMBO_TERM_PER_COMBO
#define COMBO_MUST_TAP_PER_COMBO
// #define COMBO_ONLY_FROM_LAYER 0
#define COMBO_SHOULD_TRIGGER

#define TAPPING_TERM_PER_KEY

#define PERMISSIVE_HOLD
// #define PERMISSIVE_HOLD_PER_KEY
//
#define QUICK_TAP_TERM_PER_KEY
#define HOLD_ON_OTHER_KEY_PRESS_PER_KEY

#define SPLIT_MODS_ENABLE

#define ONESHOT_TAP_TOGGLE 3  /* Tapping this number of times holds the key until tapped once again. */
#define ONESHOT_TIMEOUT 2500  /* Time (in ms) before the one shot key is released */

#define THUMB_EXTRA 0
#define INDEX_EXTRA 0
#define LONG_EXTRA 0
#define RING_EXTRA 0
#define PINKY_EXTRA 0

// Should reduce the total firmware footprint according to some blog post
#define DISABLE_LEADER

// Not supported without flto
#define NO_ACTION_MACRO
#define NO_ACTION_FUNCTION
