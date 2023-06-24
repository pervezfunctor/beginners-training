//
// Created by technoidentity on 14/6/23.
//
#include <stdio.h>
#define MAXLINE 1000
int escape(char t[],char s[]);
int getLine(char s[],int lim);
int main(){
//    int len;
    char line[MAXLINE];
    char line1[MAXLINE];
    while(getLine(line,MAXLINE)>0) {
//    printf("%d",escape(line,line1));
        escape(line, line1);
        printf("%s", line1);
    }
}


int escape(char t[],char s[]){
    int i=0,j=0;
    while(t[i] != '\0') {
        if(t[i] != '\n' && t[i] != '\t')
            s[j]=t[i];
        else {
            switch (t[i]) {
                case '\n':
                    s[j] = '\\';
                    s[++j] = 'n';
                    break;
                case '\t':
                    s[j] = '\\';
                    s[++j] = 't';
                    break;
            }
        }
        i++;
        j++;
    }
    s[j]='\n';
    j++;
    s[j]='\0';
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