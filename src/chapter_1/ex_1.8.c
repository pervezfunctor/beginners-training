//
// Created by technoidentity on 5/6/23.
//
#include <stdio.h>
int main(){
    int c;
    int cb=0,ct=0,cn=0;
    while((c=getchar())!=EOF){
        if(c==' ') cb++;
        if(c=='\t') ct++;
        if(c== '\n') cn++;
    }
    printf("blanks=%d , tabs=%d , newlines=%d" , cb,ct,cn);
}