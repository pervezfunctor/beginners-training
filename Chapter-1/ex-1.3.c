#include<stdio.h>
int main(){
    float fahrenheit,celsius;

    printf("fahrenheit to celsius table\n");
    printf("fahrenheit\tcelsius\n");
    printf("-------------------\n");

    for(fahrenheit=0; fahrenheit <= 100; fahrenheit += 10){
        celsius=((5.0/9.0)*(fahrenheit-32));
        printf("%6.2lf\t%9.2lf\n", fahrenheit, celsius);
    }
}
