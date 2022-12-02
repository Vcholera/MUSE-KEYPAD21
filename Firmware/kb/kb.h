#ifndef KB_H
#define KB_H

#include "quantum.h"

#pragma once

#define LAYOUT( \
	     K01, K02, K03, K04, \
	     K11, K12, K13, K14, \
	     K21, K22, K23, K24, \
	K30, K31, K32, K33,      \
	K40, K41, K42, K43, K44, \
	K50, K51, K52, K53       \
) { \
	{ KC_NO,   K01,   K02,   K03,   K04 }, \
	{ KC_NO,   K11,   K12,   K13,   K14 }, \
	{ KC_NO, K21,   K22,   K23,   K24 }, \
	{ K30,   K31,   K32,   K33,   KC_NO }, \
	{ K40,   K41,   K42,   K43,   K44 }, \
	{ K50,   K51,   K52,   K53,   KC_NO }  \
}

#endif
