#include<stdio.h>
int main(){
    float fahr,cel;
    for(fahr = 300;fahr>=0; fahr-=20){
        cel=(5.0/9.0) * (fahr - 32.0);
        printf("%3.0f %6.1f\n",fahr,cel);
    }
}