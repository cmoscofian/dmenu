/* See LICENSE file for copyright and license details. */

/* Default settings; can be overriden by command line. */
static unsigned int lines       = 10;       /* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static const char *prompt       = NULL;     /* -p option; prompt to the left of input field */
static int fuzzy                = 0;        /* -z option; if 0, dmenu doesn't use fuzzy matching */

static int minwidth             = 500;      /* minimum width when centered */
static unsigned int borderwidth = 3;        /* size of the window border */

/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = { "Unifont:size=15", "monospace:size=10" };

/* nibble color scheme */
static const char black[]           = "#000000";
static const char white[]           = "#ffffff";
static const char dark_red[]        = "#800000";
static const char dark_green[]      = "#008000";
static const char dark_yellow[]     = "#808000";
static const char dark_blue[]       = "#000080";
static const char dark_fuchsia[]    = "#800080";
static const char dark_cyan[]       = "#008080";
static const char dark_grey[]       = "#404040";
static const char light_red[]       = "#ff0000";
static const char light_green[]     = "#00ff00";
static const char light_yellow[]    = "#ffff00";
static const char light_blue[]      = "#0000ff";
static const char light_fuchsia[]   = "#ff00ff";
static const char light_cyan[]      = "#00ffff";
static const char light_grey[]      = "#c0c0c0";

static const char *bordercolor      = dark_grey;

static const char *colors[SchemeLast][ColLast] = {
	/*                  fg          bg          */
	[SchemeNorm]    = { dark_blue,  light_grey  },
	[SchemeSel]     = { light_grey, dark_cyan   },
	[SchemeOut]     = { black,      white       },
};

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";
