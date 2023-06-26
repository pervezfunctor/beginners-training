#include <stdio.h>

#define swap(type, x, y) \
 { \
    type temp = x; \
    x = y; \
    y =  temp; \
}

int main(void) {
    int a ;
    int b ;
    printf("enter first integer:");
    scanf("%d",&a);
    printf("enter second integer:");
    scanf("%d",&b);

    printf("Before swapping: a = %d, b = %d\n", a, b);
    swap(int, a, b);
    printf("After swapping: a = %d, b = %d\n", a, b);

    return 0;
}
