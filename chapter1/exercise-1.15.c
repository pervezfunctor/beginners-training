#include <stdio.h>
float CelsiusTo(float fahrenheit);
int main()
{
    float fahrenheit;
    printf("fahrenheit to celsius conversion values are:\n");
    for(fahrenheit=0;fahrenheit<=300;fahrenheit+=20){
        printf("%3.0f %6.1f\n",fahrenheit,CelsiusTo(fahrenheit));
    }
}
float CelsiusTo(float fahrenheit)
{
    return (5.0/9.0) * (fahrenheit - 32.0);
}