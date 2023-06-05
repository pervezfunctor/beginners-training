//
// Created by technoidentity on 5/6/23.
//

// fahrenheit to celcius
#include <stdio.h>

int  main(){
    float farh,celcius;
    int lower=0,upper=100,step=20;
    farh=lower;
    printf("farh\t\tcelcius\n");
    while(farh<=upper){
        celcius=5* (farh-32)/9;
        printf("%6.0f\t%6.2f\n",farh,celcius);
        farh=farh+step;

    }
}