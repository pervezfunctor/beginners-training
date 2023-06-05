//
// Created by technoidentity on 5/6/23.
//
//replacing each string of one or more blanks by a single blank
#include <stdio.h>
int main(){
    int c,prev_c;
    while((c=getchar())!=EOF){
        if(prev_c==' '&& c!=' '){
            putchar(' ');
            putchar(c);
        }else if(c!=' '){
            putchar(c);
        }
        prev_c=c;

    }

}