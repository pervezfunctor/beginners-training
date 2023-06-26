#include<stdio.h>
#define swap(t, x, y) { t _z;   \
                        _z = x; \
                        x = y;  \
                        y = _z; }

int main(void) {
    int x, y;
    printf("enter a number1 :");
    scanf("%d",&x);
    printf("enter a number2 :");
    scanf("%d",&y);
    printf("x= %d \t y= %d\n", x, y);
    swap(int, x, y);
    printf("x=%d \t y=%d\n", x, y);
}