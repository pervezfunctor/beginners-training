
#include <stdio.h>

int main() {
    double celsius, fahrenheit;
    int lower, upper, step;
    lower = 0;
    upper = 100;
    step = 10;
    printf("Celsius\tFahrenheit\n");
    printf("-------------------\n");
    celsius = lower;
    while (celsius <= upper) {
        fahrenheit = (celsius * 9 / 5) + 32;
        printf("%6.2lf\t%9.2lf\n", celsius, fahrenheit);
        celsius += step;
    }
    return 0;
}
