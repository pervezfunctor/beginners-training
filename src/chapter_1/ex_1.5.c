//
// Created by technoidentity on 5/6/23.
//
#include <stdio.h>
int main(){
    float farh,celcius;
    int lower=0,upper=300,step=20;
    celcius=upper;
        printf("celcius\t  farh\n");
    while(celcius>=lower){
        farh=32+(celcius*9)/5;
        printf("%6.0f\t%6.0f\n",celcius,farh);
        celcius=celcius-step;

    }
}