//
// Created by technoidentity on 5/6/23.
//program to print a heading
#include <stdio.h>
int main(){
    float fahrenheit,celsius;
    int lower,upper,step;
    lower=0;
    upper=300;
    step=10;
    printf("fahrenheit  celsius\n");
    fahrenheit=lower;
    while(fahrenheit<=upper){
        celsius=(fahrenheit*9.0/5.0)+32.0;
        printf("%6.2lf\t%9.2lf\n",fahrenheit,celsius);
        fahrenheit+=step;
    }
}