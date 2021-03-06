#ifndef LIBCAPYBARA_REPEAT_CAPY_H
#define LIBCAPYBARA_REPEAT_CAPY_H




#define REPEAT_CAPY0(x)
#define REPEAT_CAPY1(x)      x
#define REPEAT_CAPY2(x)      REPEAT_CAPY1(x),REPEAT_CAPY1(x)
#define REPEAT_CAPY4(x)      REPEAT_CAPY2(x),REPEAT_CAPY2(x)
#define REPEAT_CAPY8(x)      REPEAT_CAPY4(x),REPEAT_CAPY4(x)
#define REPEAT_CAPY16(x)     REPEAT_CAPY8(x),REPEAT_CAPY8(x)
#define REPEAT_CAPY32(x)     REPEAT_CAPY16(x),REPEAT_CAPY16(x)
#define REPEAT_CAPY64(x)     REPEAT_CAPY32(x),REPEAT_CAPY32(x)
#define REPEAT_CAPY128(x)    REPEAT_CAPY64(x),REPEAT_CAPY64(x)
#define REPEAT_CAPY256(x)    REPEAT_CAPY128(x),REPEAT_CAPY128(x)
#define REPEAT_CAPY512(x)    REPEAT_CAPY256(x),REPEAT_CAPY256(x)
#define REPEAT_CAPY1024(x)   REPEAT_CAPY512(x),REPEAT_CAPY512(x)
#define REPEAT_CAPY2048(x)   REPEAT_CAPY1024(x),REPEAT_CAPY1024(x)
#define REPEAT_CAPY4096(x)   REPEAT_CAPY2048(x),REPEAT_CAPY2048(x)

#define REPEAT_CAPY_INNER(count, x) REPEAT_CAPY ## count(x)
#define REPEAT_CAPY(count, x) REPEAT_CAPY_INNER(count, x)

#define 
#endif // LIBCAPYBARA_REPEAT_CAPY_H


