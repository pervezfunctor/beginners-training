//
// Created by technoidentity on 6/6/23.
//
#include <stdio.h>
#define MAXLINE 1000
#define MINLEN 81
#define OUT 0
#define IN 1

int getLine(char s[], int lim);
int removeTrailingSpace(char lin[]);

int main()
{
   int c;
   char line[MAXLINE];
   while(getLine(line,MAXLINE)>0){
       if(removeTrailingSpace(line)>0){
           printf("%s",line);}
   }
    return 0;
}
int removeTrailingSpace(char line[]) {
    int i = 0;
    while (line[i] != '\n') ++i;
    --i;
    while (i >= 0 && (line[i] == ' ' ||line[i] == '\t'))
        --i;
        if (i >= 0) {
            i++;
            line[i] = '\n';
            i++;
            line[i] = '\0';
        }

    return i;
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