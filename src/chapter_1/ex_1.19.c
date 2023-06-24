//
// Created by technoidentity on 7/6/23.
//
#include <stdio.h>

#define MAXLINE 1000
int getLine(char s[],int lim);
char reverse(char l[],char rev[]);

int main(){
        char line[MAXLINE];
        char rev[MAXLINE];
        getLine(line,MAXLINE);
        reverse(line,rev);
        printf("%s",rev);
    }

char reverse(char l[],char rev[]) {
    int j=0,i = 0;
    while (l[i] != '\n')
        ++i;
    --i;
    while(i>=0 &&(l[i]==' ' || l[i]=='\t'))
        --i;
    while(i>=0){
        rev[j]=l[i];
        j++;
        --i;
    }
    rev[j]='\0';

    return j;
}


int getLine(char s[],int lim){

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
//abcdefghijklmnopqrstuvwxyz