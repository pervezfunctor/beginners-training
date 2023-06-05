//
// Created by technoidentity on 3/6/23.
//
//program to print the table in reverse order

#include <stdio.h>
int main(){
    float celsius, farenheit;
    int lower=0;
    int upper=300;
    int step=10;

    printf("celsius\tfarenheit\n");
    printf("----------------\n");

    celsius=upper;
    while (celsius>=lower){
        farenheit=(celsius*9.0/5.0)+32.0;
        printf("%6.2lf\t%9.2lf\n",celsius,farenheit);
        celsius -= step;
    }
}