//
// Created by technoidentity on 3/6/23.
//
//program to print the table in reverse order

#include <stdio.h>
int main(){
    int fahrenheit;
   printf("fahrenheit\tcelsius\n");
   for(fahrenheit=300;fahrenheit>=0;fahrenheit=fahrenheit-20)

       printf("%3d %17.1f\n",fahrenheit,(5.0/9.0)*(fahrenheit-32));
}