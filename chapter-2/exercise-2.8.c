//
// Created by technoidentity on 13/6/23.
//
//function rightrot(x,n) that returns the value of the integer x rotated to the right by n positions.
#include <stdio.h>

int rightrot(int x, int n);

int main(void)
{
    int x, n;

    printf("Enter the integer: ");
    scanf("%d", &x);
    printf("Enter number of bits to be rotated: ");
    scanf("%d", &n);
    printf("right rotation of %d by %d is: %d\n",x,n, rightrot(x, n));
    return 0;
}

int rightrot(int x, int n)
{
    int end = 0;

    end = ~(~end << n);
    end = x & end;
    end = end << (8 * sizeof(x) - n);
    return ((x >> n) | end);
}