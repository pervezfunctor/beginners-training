//
// Created by technoidentity on 3/6/23.
//
#include<stdio.h>
int main(){
    double celsius,fahrenheit;
    printf("Celsius\tFahrenheit\n");
    printf("-------------------\n");
    for(celsius=300;celsius >= 0;celsius-=10) {
        fahrenheit = (celsius * 9 / 5) + 32;
        printf("%6.2lf\t%9.2lf\n", celsius, fahrenheit);
    }
}
