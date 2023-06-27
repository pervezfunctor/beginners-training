//
// Created by technoidentity on 27/6/23.
//
#include <stdio.h>
#define LIMIT 100
int main(){
    int c , len=0;
    while((c = getchar()) != EOF && len < LIMIT) {
        putchar(c);
        len++;
    }
}