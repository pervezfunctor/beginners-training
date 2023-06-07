#include<stdio.h>
float fahr (int cel);
int main(){
    printf("celsius  fahrenheit\n");
    for(int i=0;i<=300;i+=20)
    printf("%7d %10.1f \n",i,fahr(i));
}
float fahr (int cel ){
    return (9.0/5.0 * cel)+32;
}
