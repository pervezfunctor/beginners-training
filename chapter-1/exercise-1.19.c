//
// Created by technoidentity on 6/6/23.
//
//program that reverses its input a line at a time
#include <stdio.h>
#define MAXLINE 1000
int getLine(char line[],int size);
int main(void){
    char line[MAXLINE];
    int len;
    while(getLine(line,MAXLINE)>0){
        continue;
    }
    return 0;
}
int getLine(char s[],int size){
    char rev[size];
    int i,c,len;
    for(i=0;i<size-1 &&(c=getchar())!=EOF && c!='\n';i++){
        s[i]=c;
    }
    len=i;
    s[i]='\0';
    for(i=0;i<len;i++){
        rev[len-i-1]=s[i];
    }
    rev[i]='\0';
    printf("%s\n",rev);
    return len;
}