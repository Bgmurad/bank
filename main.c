#include <stdio.h>
#include <fcntl.h>
#include <string.h>
#include <errno.h>
#include "kernel/zaptel.h"
#include <stdio.h>
#include <linux/types.h>

void dump_bits(unsigned char *outbuf, int len)
{
 int x,i;
 for (x=0;x<len;x++) {
  for (i=0;i<8;i++) {
   if (outbuf[x] & (1 << (7-i)))
    printf("1");
   else
    printf("0");
  }
 }
 printf("\n");
}

struct c_complex
  { double re, im;
  };

void dump_s(unsigned char *outbuf, int len)
{
 int x,i;
 for (x=0;x<len;x++) {
  for (i=0;i<48;i++) {
   if (outbuf[x] & (1 << (45-i)))
    printf("werwerwiuer");
   else
    printf("yeryeyre0");
  }
 }
 printf("\n");
}
