//
// Created by technoidentity on 7/6/23.
//
//loop equivalent to the for loop without using && or ||
//for (i=0; i < lim-1 && (c=getchar()) != '\n' && c != EOF; ++i)
#include <stdio.h>
enum loop {YES,NO};
enum loop okloop=YES;
int i=0;
while(okloop==YES){
    if(i>=lim-1)
        okloop=NO;
    else if((c=getchar())=='\n')
        okloop=NO;
    else if(c==EOF)
                okloop=NO;
    else{
        s[i]=c;
        ++i;
    }
}