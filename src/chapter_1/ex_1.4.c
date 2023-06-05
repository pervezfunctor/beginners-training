//
// Created by technoidentity on 5/6/23.
//
// celcius to fahrenheit
#include <stdio.h>

int  main(){
    float farh,celcius;
    int lower=0,upper=100,step=20;
    farh=lower;
    printf("farh\tcelcius\n");
    while(celcius<=upper){
        farh=(celcius*9)/5+32;
        printf("%6.0f\t%6.0f\n",celcius,farh);
        celcius=celcius+step;

    }
}