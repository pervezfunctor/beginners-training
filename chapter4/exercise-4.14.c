#include<stdio.h>
#define swap(t, x, y) { t _z;   \
                        _z = x; \
                        x = y;  \
                        y = _z; }
int main() {
    int x, y;
    printf("enter a n1:");
    scanf("%d",&x);
    printf("enter a n2:");
    scanf("%d",&y);
    printf("x= %d \t y= %d\n", x, y);
    swap(int, x, y);
    printf("x=%d \t y=%d\n", x, y);
}