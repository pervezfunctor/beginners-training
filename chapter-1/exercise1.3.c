#include<stdio.h>
 main(){
    printf("fahrenheit to celsius values\n");
    float fahrenheit,celsius;
    for(fahrenheit=0;fahrenheit<=400;fahrenheit=fahrenheit+20){
        celsius=((5.0/9.0)*fahrenheit-32);
        printf("%3.0f %6.1f\n",fahrenheit,celsius);

    }
//    printf("%3f %6.1f\n",fahrenheit,celsius);
}