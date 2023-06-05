
#include<stdio.h>
int main()
{
    float fahr,celsius;
    float lower,upper,step;
    lower=0;
    upper=300;
    step=20;
    fahr=lower;
    printf("Celsius Fahrenheit \n");
    while(celsius<=upper){
        fahr = celsius * (9/5) + 32;
        printf("%3.0f \t %3.1f \n",celsius,fahr);
        celsius=celsius+step;
    }

}
