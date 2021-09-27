static const char norm_fg[] = "#f3c187";
static const char norm_bg[] = "#121d1f";
static const char norm_border[] = "#aa875e";

static const char sel_fg[] = "#f3c187";
static const char sel_bg[] = "#DE5E28";
static const char sel_border[] = "#f3c187";

static const char urg_fg[] = "#f3c187";
static const char urg_bg[] = "#DC3326";
static const char urg_border[] = "#DC3326";

static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
    [SchemeUrg] =  { urg_fg,      urg_bg,    urg_border },
};
