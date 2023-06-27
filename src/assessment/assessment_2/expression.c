//
// Created by technoidentity on 27/6/23.
//
#include <stdio.h>
#include <math.h>

int factorial(int n);
double expression(int x,int n );

int main(){
    printf("%lf", expression(1,2));
}

double expression(int x,int n){
    int i = 0;
    double sum=0;
    while(i <= n){
       sum=sum+(pow(x,i)/ factorial(i)) ;
       i++;
    }
    return sum;
}

int factorial(int n) {
    if(n == 0) return 1;

    int fact = 1;

    for(int i = 1; i <= n; i++) {
        fact = fact * i;
    }

    return fact;
}