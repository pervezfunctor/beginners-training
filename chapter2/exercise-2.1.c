#include <stdio.h>
#include <float.h>
#include <limits.h>
int main(){
    printf("range signed integer:%d to %d\n",SCHAR_MIN,SCHAR_MAX);
    printf("range unsigned integer:0 to %d\n",UCHAR_MAX);
    printf("range short integer:%d to %d\n",SHRT_MIN,SHRT_MAX);
    printf("range unsigned short integer:0 to %d\n",USHRT_MAX);
    printf("range signed character:%d to %d\n",CHAR_MIN,CHAR_MAX);
    printf("range unsigned character:0 to %d\n",UCHAR_MAX);
    printf("range float:%f to %f\n",FLT_MIN,FLT_MAX);
    printf("range signed long:%ld to %ld\n",LONG_MIN,LONG_MAX);
    printf("range unsigned long:0 to %ld\n",ULONG_MAX);
    printf("range signed double:%le to %le\n",DBL_MIN,DBL_MAX);
    printf("range unsigned double:%e to %e\n",LDBL_MIN,LDBL_MAX);
}