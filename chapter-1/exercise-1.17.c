//
// Created by technoidentity on 5/6/23.
//
//program to print all input lines that are longer than 80 characters

#include<stdio.h>
#define MAXLINE 1000
int getLine(char line[],int maxline);
int main(){
    int len;
    char line[MAXLINE];
    while((len=getLine(line,MAXLINE))>0)
        if(len>80)
            printf("line longer than 80 characters:%s",line);
    return 0;
}
int getLine(char line[],int maxline){
    int i=0;
    char c;
    while ((c=getchar())!='\n' && c!=EOF){
        if(i<maxline-1)
            line[i++]=c;
    }
    line[i]='\0';
    return  i;
}
