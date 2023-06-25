#include <stdio.h>

#define swap(t, x, y) \
do {                  \
  t temp = x ;         \
  x = y   ;            \
  y = temp  ;            \
}while(0);

int main()
{
    int a, b;
    printf("enter a and b values:\n");
    scanf("%d %d",&a,&b);
    printf("before swap: a = %d, b = %d\n",a,b);
    swap(int, a, b);
    printf("after swap: a = %d, b = %d",a,b);
    return 0;
}
