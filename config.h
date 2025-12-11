/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line.
 *
 * Insalled Patches
 * center-20250407-b1e217b
 * fuzzyhighlight-5.3
 * fuzzymatch-5.3
 *
 * */

static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
static int centered = 1;                    /* -c option; centers dmenu on screen */
static int min_width = 500;                    /* minimum width when centered */
static const float menu_height_ratio = 4.0f;  /* This is the ratio used in the original calculation */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {"Source Code Pro:size=12"};
static const char *prompt      = "󱓞 ";      /* -p  option; prompt to the left of input field */

// #include "/home/nick/.cache/wal/colors-wal-dmenu.h"

static const char *colors[SchemeLast][2] = {
//                                 fg         bg
	[SchemeNorm] =          { "#c5c8c6", "#1d1f21" },
	[SchemeSel] =           { "#70c0ba", "#373b41" },
	[SchemeSelHighlight] =  { "#000000", "#b294bb" },
	[SchemeNormHighlight] = { "#7d7d7d", "#e6c547" },
	[SchemeOut] =           { "#eee8d5", "#2aa198" },
};

/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 10;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";
