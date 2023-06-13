#include<stdio.h>
#include<limits.h>
int main() {
    printf("printing signed ranges:\n");
    printf("range for signed long is :%d to %d,\n", LONG_MAX, LONG_MIN);
    printf("range for signed int is :%d to %d,\n", INT_MAX, INT_MIN);
    printf("range for signed char is :%d to %d,\n", CHAR_MAX, CHAR_MIN);
    printf("range for signed short is :%d to %d,\n", SHRT_MAX, SHRT_MIN);
    printf("printing unsigned ranges:\n");
    printf("range for unsigned long is :0to %d,\n", LONG_MAX, LONG_MIN);
    printf("range for unsigned int is :0 to %d,\n", INT_MAX, INT_MIN);
    printf("range for unsigned char is :%d,\n", UCHAR_MAX);
    printf("range for unsigned short is :0 to %d,\n", SHRT_MAX, SHRT_MIN);
}