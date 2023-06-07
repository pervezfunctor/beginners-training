//
// Created by technoidentity on 7/6/23.
//
//program to determine the ranges of char, short, int, and long variables,both signed and unsigned
#include <stdio.h>
#include <limits.h>
int main(){
    printf("signed ranges\n");
    printf("range of signed char:%d to %d\n",CHAR_MIN,CHAR_MAX);
    printf("range of signed short:%d to %d\n",SHRT_MIN,SHRT_MAX);
    printf("range of signed int:%d to %d\n",INT_MIN,INT_MAX);
    printf("range of signed long:%ld to %ld\n",LONG_MIN,LONG_MAX);
    printf("--------------------------------------------------\n");
    printf("unsigned ranges\n");
    printf("range of unsigned char:0 to %u\n",UCHAR_MAX);
    printf("range of unsigned short:0 to %u\n",USHRT_MAX);
    printf("range of unsigned int:0 to %u\n",UINT_MAX);
    printf("range of unsigned long:0 to %lu\n",ULONG_MAX);
    return 0;
}