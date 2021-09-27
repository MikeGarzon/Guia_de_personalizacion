const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#121d1f", /* black   */
  [1] = "#DC3326", /* red     */
  [2] = "#DE5E28", /* green   */
  [3] = "#F64632", /* yellow  */
  [4] = "#994A57", /* blue    */
  [5] = "#69926F", /* magenta */
  [6] = "#BD9F2F", /* cyan    */
  [7] = "#f3c187", /* white   */

  /* 8 bright colors */
  [8]  = "#aa875e",  /* black   */
  [9]  = "#DC3326",  /* red     */
  [10] = "#DE5E28", /* green   */
  [11] = "#F64632", /* yellow  */
  [12] = "#994A57", /* blue    */
  [13] = "#69926F", /* magenta */
  [14] = "#BD9F2F", /* cyan    */
  [15] = "#f3c187", /* white   */

  /* special colors */
  [256] = "#121d1f", /* background */
  [257] = "#f3c187", /* foreground */
  [258] = "#f3c187",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
