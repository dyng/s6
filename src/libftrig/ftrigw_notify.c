/* ISC license. */

#include "ftrigw.h"

int ftrigw_notify (char const *path, char c)
{
  return ftrigw_notifyb(path, &c, 1) ;
}
