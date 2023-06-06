#include<stdio.h>
    double celsiusToFahrenheit(double celsius){
        return (celsius * 9 / 5) + 32;
    }
    int main() {
      double celsius , fahrenheit;
      printf("enter temperature in celsius:" );
      scanf("%lf",&celsius);
      fahrenheit = celsiusToFahrenheit(celsius);
      printf("Temperature in Fahrenheit: %.2f\n", fahrenheit);
      return 0;
}