#include <stdio.h>
void main()
{
    float fahrenheit, celsius;
      for(fahrenheit=300;fahrenheit>=0;fahrenheit-=20){
          celsius=(5.0/9.0) * (fahrenheit - 32.0);
          printf("%3.0f %6.1f\n",fahrenheit,celsius);
    }
}