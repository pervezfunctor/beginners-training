//
// Created by technoidentity on 6/6/23.
//
#include <stdio.h>
#define MAXLINE 1000
#define MINLEN 81
/* maximum input line length */
int getLine(char line[], int maxline);
void copy(char to[], char from[]);/* print the longest input line */
int main()
{
    int len;
    char line[MAXLINE];
    while ((len = getLine(line, MAXLINE)) > 0)
        if(len>=MINLEN)
            printf("%s",line);

}

int getLine(char s[],int lim)
{
    int c, i;
    for (i=0; (c=getchar())!=EOF && c!='\n'; ++i) {
        if (i < lim - 2)
            s[i] = c;
    }
    s[lim-2]='\n';
    s[lim-1]='\0';
    return i;
}
