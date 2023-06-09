#include<stdio.h>
#include<float.h>
#include<limits.h>
int main() {
    printf("signed char range : %d to %d\n", SCHAR_MIN, SCHAR_MAX);
    printf("unsigned char range : 0 to %u\n", UCHAR_MAX);

    printf("signed short range: %d to %d\n",SHRT_MIN,SHRT_MAX);
    printf("unsigned short range:0 to %u\n",USHRT_MAX);

    printf("signed int range : %d to %d\n",INT_MIN,INT_MIN);
    printf("unsigned int range : %0 to%u\n",UINT_MAX);

    printf(" signed long range: %ld to %ld\n", LONG_MIN, LONG_MAX);
    printf(" unsigned long range : 0 to %lu\n", ULONG_MAX);
    return 0;
}