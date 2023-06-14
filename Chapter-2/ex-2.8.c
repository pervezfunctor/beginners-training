#include <stdio.h>
int right_rot(int x, int n);
int main(void)
{
    int x, n;
    printf("Enter x: ");
    scanf("%d", &x);
    printf("Enter number of bits n: ");
    scanf("%d", &n);
    printf("The processed number is: %d\n", right_rot(x, n));
    return 0;
}
int right_rot(int x, int n)
{
    int end = 0;
    end = ~(~end << n);
    end = x & end;
    end = end << (8 * sizeof(x) - n);
    return ((x >> n) | end);
}

