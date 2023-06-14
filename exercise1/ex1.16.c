#include <stdio.h>
#define MAXLINE 10
/* maximum input line length */
int getLine(char line[], int maxline);
void copy(char to[], char from[]);/* print the longest input line */
int main()
{
    int len;
    int max;
    char line[MAXLINE];
    char longest[MAXLINE];
    max = 0;
    while ((len = getLine(line, MAXLINE)) > 0)
        if (len > max) {
            max = len;
            copy(longest, line);
        }
    if (max > 0) /* there was a line */
        printf("%s %d", longest,max);
    return 0;
}
// getLine: read a line into s, return length
int getLine(char s[],int lim)
{
    int c, i,j=0;
    for (i=0; (c=getchar())!=EOF && c!='\n'; ++i) {
        if (i < lim - 2) {
            s[i] = c;
            j++;
        }
    }
    if(c=='\n'){
        s[i]=c;
        j++;
        ++i;
    }

    s[j]='\0';

    return i;
}
/* copy: copy 'from' into 'to'; assume to is big enough */
void copy(char to[], char from[]) {
    int i;
    i = 0;
    while ((to[i] = from[i]) != '\0')
        ++i;
}