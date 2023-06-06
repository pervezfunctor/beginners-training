#include <stdio.h>
void main()
{
    float fahrenheit, celsius;
    printf("fahrenheit to celsius conversion values are:\n");
    for(fahrenheit=0;fahrenheit<=300;fahrenheit+=20){
        printf("%3.0f %6.1f\n",fahrenheit,(5.0/9.0) * (fahrenheit - 32.0));
    }
}