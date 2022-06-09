static const char norm_fg[] = "#a5b8c1";
static const char norm_bg[] = "#081933";
static const char norm_border[] = "#738087";

static const char sel_fg[] = "#a5b8c1";
static const char sel_bg[] = "#E75C5B";
static const char sel_border[] = "#a5b8c1";

static const char urg_fg[] = "#a5b8c1";
static const char urg_bg[] = "#9B5377";
static const char urg_border[] = "#9B5377";

static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
    [SchemeUrg] =  { urg_fg,      urg_bg,    urg_border },
};
