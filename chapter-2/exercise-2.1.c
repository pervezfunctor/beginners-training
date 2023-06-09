#include <stdio.h>
#include <limits.h>
#include <float.h>
void main() {

    printf("signed integer %d to %d\n", SCHAR_MIN,SCHAR_MAX);
    printf("unsigned integer 0 to %d\n",UCHAR_MAX);

    printf("range of float %f to %f\n",FLT_MIN,FLT_MAX);

    printf("range of signed short %d to %d\n",SHRT_MIN,SHRT_MAX);
    printf("range of unsigned short 0 to %d\n",USHRT_MAX);

    printf("range of signed character %d to %d\n",CHAR_MIN,CHAR_MAX);
    printf("range of unsigned character 0 to %d\n",UCHAR_MAX);

    printf("range of signed long %ld to %ld\n",LONG_MIN,LONG_MAX);
    printf("range of unsigned long 0 to %ld\n",ULONG_MAX);

    printf("range of signed double %le to  %le\n ",DBL_MIN,DBL_MAX);
    printf("range of signed long double %e to %e\n",LDBL_MIN,LDBL_MAX);
}