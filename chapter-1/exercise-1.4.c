//
// Created by technoidentity on 3/6/23.
//program to print the corresponding celsius to fahrenheit table
#include <stdio.h>
int main()
{
    float celsius, fahrenheit;
    int upper,lower,step;
    upper=300;
    lower=0;
    step=10;
    printf("celsius\tFahrenheit\n");
    celsius=lower;
    while(celsius<=upper){
        fahrenheit=(celsius*9.0/5.0)+32.0;
        printf("%6.2lf\t%9.2lf\n",celsius,fahrenheit);
        celsius+=step;
    }
}