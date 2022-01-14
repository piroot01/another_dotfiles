/* user and group to drop privileges to */
static const char *user  = "tomas";
static const char *group = "tomas";

static const char *colorname[NUMCOLS] = {
	[BACKGROUND] =   "#282828",     /* after initialization */
	[INIT] = "black",
	[INPUT] =  "#005577",   /* during input */
	[FAILED] = "#CC3333",   /* wrong password */
};

/*
* Xresources preferences to load at startup
*/
ResourcePref resources[] = {
		{ "color15",       STRING,  &colorname[INIT] },
		{ "color4",       STRING,  &colorname[INPUT] },
		{ "color1",       STRING,  &colorname[FAILED] },
		{ "color3",       STRING,  &colorname[CAPS] },
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 0;

/* time in seconds before the monitor shuts down */
static const int monitortime = 600;

/* insert grid pattern with scale 1:1, the size can be changed with logosize */
static const int logosize = 10;
static const int logow = 12;	/* grid width and height for right center alignment*/
static const int logoh = 6;

static XRectangle rectangles[9] = {
	/* x	y	w	h */
	{ 0,	3,	1,	3 },
	{ 1,	3,	2,	1 },
	{ 0,	5,	8,	1 },
	{ 3,	0,	1,	5 },
	{ 5,	3,	1,	2 },
	{ 7,	3,	1,	2 },
	{ 8,	3,	4,	1 },
	{ 9,	4,	1,	2 },
	{ 11,	4,	1,	2 },

};
