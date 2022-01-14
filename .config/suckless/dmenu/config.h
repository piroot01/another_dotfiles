/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	"Jetbrains Mono:size=10"
};
static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */
static const char *colors[SchemeLast][2] = {
	/*     fg         bg       */
 	[SchemeNorm] = { "#ebdbb2", "#1d2021" },
        [SchemeSel] = { "#ebdbb2", "#32302f" },
	[SchemeSelHighlight] = { "#d65d0e", "#1d2021" },
	[SchemeNormHighlight] = { "#d65d0e", "#1d2021" },
//	[SchemeOutHighlight] = { "#ffc978", "#00ffff" },
	[SchemeOut] = { "#ebdbb2", "#1d2021" },
	[SchemeHp] = { "#ebdbb2", "#1d2021" }

};
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 0;
/* -h option; minimum height of a menu line */
static unsigned int lineheight = 16;
static unsigned int min_lineheight = 8;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";