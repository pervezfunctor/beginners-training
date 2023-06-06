#include<stdio.h>
float Celsius(float fahrenheit);
int main(){
    printf("fahrenheit to celsius values\n");
    float fahrenheit;
    for(fahrenheit=0;fahrenheit<=400;fahrenheit+=20){
//        celsius=((5.0/9.0)*fahrenheit-32);
        printf("%3.0f %6.1f\n",fahrenheit,Celsius(fahrenheit));

    }
//    printf("%3f %6.1f\n",fahrenheit,celsius);
}
float Celsius(float fahrenheit){
    return (5.0/9.0)*(fahrenheit-32);
}