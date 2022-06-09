const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#081933", /* black   */
  [1] = "#9B5377", /* red     */
  [2] = "#E75C5B", /* green   */
  [3] = "#123D86", /* yellow  */
  [4] = "#195E81", /* blue    */
  [5] = "#355982", /* magenta */
  [6] = "#506885", /* cyan    */
  [7] = "#a5b8c1", /* white   */

  /* 8 bright colors */
  [8]  = "#738087",  /* black   */
  [9]  = "#9B5377",  /* red     */
  [10] = "#E75C5B", /* green   */
  [11] = "#123D86", /* yellow  */
  [12] = "#195E81", /* blue    */
  [13] = "#355982", /* magenta */
  [14] = "#506885", /* cyan    */
  [15] = "#a5b8c1", /* white   */

  /* special colors */
  [256] = "#081933", /* background */
  [257] = "#a5b8c1", /* foreground */
  [258] = "#a5b8c1",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
