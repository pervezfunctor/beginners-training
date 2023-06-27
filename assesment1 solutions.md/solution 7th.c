//
// Created by technoidentity on 27/6/23.
//
#include <stdio.h>
int  iteration(int n, double x) {
    float res = 1.0;
    float item = 1.0;
    for (int i = 1; i <= n; i++) {
        item *= x / i;
        res += item;
    }
    return res;
}
int main() {
    int n;
    double x = 2.0;
    printf("Enter n value: ");
    scanf("%d", &n);
    printf("Enter x value: ");
    scanf("%lf", &x);
    double sum = iteration(n, x);
    printf("add: %.6f\n", sum);
    return 0;
}
