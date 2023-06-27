#include<stdio.h>
#define LIMIT 100
void main(){
    int c,d=1;
    while((c=getchar())!=EOF&&d<=LIMIT){
        putchar(c);
        ++d;
    }
}