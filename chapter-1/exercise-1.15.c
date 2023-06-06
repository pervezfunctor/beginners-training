//
// Created by technoidentity on 5/6/23.
//
//program to rewrite the temperature conversion program of to use a function for conversion
#include<stdio.h>
float celsius(float fahrenheit);
int main(){
    float fahrenheit;
    while(fahrenheit<=300){
        printf("%3.0f %6.1f\n",fahrenheit, celsius(fahrenheit));
        fahrenheit=fahrenheit+20;
    }
}
float celsius(float fahrenheit){
    return (5.0/9.0)*(fahrenheit-32.0);
}