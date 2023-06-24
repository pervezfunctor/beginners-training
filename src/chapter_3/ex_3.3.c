//
// Created by technoidentity on 15/6/23.
//
#include <stdio.h>
#define MAXLINE 1000
int expand(char s1[],char s2[]);
int getLine(char s[],int lim);
int main(){
    char line[MAXLINE];
    char line1[MAXLINE];
   getLine(line,MAXLINE);
   expand(line, line1);
   printf("%s", line1);
    }


int expand(char s1[],char s2[]){
   int i = 0, j = 0, k = 0;
   int start = 0, stop = 0;
    while(s1[i] != '\0'){
        start = s1[i];
        i=i+2;
        stop=s1[i];
        for(k=k;start<=stop;k++){
            s2[k]=(char)start;
            start++;
        }
    }
    return 0;
}

int getLine(char s[],int lim)
{
    int c, i,j=0;
    for (i=0; (c=getchar())!=EOF && c!='\n'; ++i) {
        if (i < lim - 2) {
            s[j] = c;
            j++;
        }
    }
    if(c=='\n'){
        s[j]=c;
        j++;
        s[j]='\0';
        ++i;
    }
    return i;
}