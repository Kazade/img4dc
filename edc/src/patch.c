#include "patch.h"

#ifdef WIN32

void bcopy(unsigned char *src, unsigned char *dest, int len)
{
  if (dest < src)
    while (len--)
      *dest++ = *src++;
  else
    {
      unsigned char *lasts = src + (len-1);
      unsigned char *lastd = dest + (len-1);
      while (len--)
        *(unsigned char *)lastd-- = *(unsigned char *)lasts--;
    }
}

#endif
