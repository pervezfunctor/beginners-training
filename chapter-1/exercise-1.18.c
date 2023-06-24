//
// Created by technoidentity on 6/6/23.
//
//program to remove trailing blanks and tabs from each line of input
#include<stdio.h>
#define MAXLEN 1000
int getLine(char line[],int maxline);
int rem(char s[]);
int main(){
    char line[MAXLEN];
    while (getLine(line,MAXLEN)>0)
        if(remove(line)>0)
            printf("%s",line);
    return 0;
}
int rem(char s[]){
    int i;
    i=0;
    while(s[i]!='\n')
        ++i;
    --i;
    while(i>=0 && (s[i]==' ' || s[i]=='\t'))
        --i;
    if(i>=0){
        ++i;
        s[i]='\n';
        ++i;
        s[i]='\0';
    }
    return i;
}
int getLine(char line[],int maxline){
    int j=0;
    char c;
    while ((c=getchar())!='\n' && c!=EOF){
        if(j<maxline-1)
            line[j++]=c;
    }
    line[j]='\0';
    return  j;
}
