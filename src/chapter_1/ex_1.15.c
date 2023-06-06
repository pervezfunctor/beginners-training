//
// Created by technoidentity on 6/6/23.
//
#include <stdio.h>
int celcius(int temp);
int fahrenheit(int temp);

int main(){
    int upper=200;
    int lower=0;
    int step=10;
    int fahr;
    fahr=lower;
    while(fahr <= upper){
        printf("%6d\t%6d\n", fahr, celcius(fahr));
        fahr= fahr + step;

    }
}

int celcius(int temp){
        return 5* (temp-32)/9;
}
int fahrenheit(int temp){
    return (temp*9)/5+32;
}