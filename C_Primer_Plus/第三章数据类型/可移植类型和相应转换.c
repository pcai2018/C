/*altnames.c--可移植整数类型名*/
#if defined(WIN32) && !defined(__MINGW32__) && !defined(__CYGWIN__)
#      define CONFIG_WIN32
#endif
#if defined(WIN32) && !defined(__MINGW32__) && !defined(__CYGWIN__) && !defined(EMULATE_INTTYPES)
#      define EMULATE_INTTYPES
#endif
#ifndef EMULATE_INTTYPES
#     include <inttypes.h>
#else
      typedef signed char    int8_t;
      typedef signed short int16_t;
      typedef signed int     int32_t;
      typedef unsigned char    uint8_t;
      typedef unsigned short uint16_t;
      typedef unsigned int     uint32_t;
#     ifdef CONFIG_WIN32
          typedef signed __int64     int64_t;
          typedef unsigned __int64 uint64_t;
#     else /* other OS */
          typedef signed long long     int64_t;
          typedef unsigned long long uint64_t;
#     endif /* other OS */
#endif /* EMULATE_INTTYPES */

#include <stdio.h>
//#include <inttype.h>    //支持可移植类型

int main(void)
{
    int32_t me32;   //me32是一个32位有符号整型变量
    me32 = 45933945;
    printf("First, assume int32_t is int: ");
    printf("me32 = %d\n, me32");
    printf("Next,let's not make any assumeptions.\n");
    printf("Instead,use a \"macro\" from inttype.h: ");
    printf("me32 = %" PRId32 "\n",me32);

    return 0;
}