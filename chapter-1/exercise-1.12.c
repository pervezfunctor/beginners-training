//
// Created by technoidentity on 5/6/23.
//
//program that prints its input one word per line
#include <stdio.h>
int main(){
    int c;
    while ((c=getchar())!=EOF){
        if(c==' ' || c=='\t')
            putchar('\n');
        else
            putchar(c);
    }
}