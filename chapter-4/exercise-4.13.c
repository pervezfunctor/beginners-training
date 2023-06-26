#include <stdio.h>
void reverser(char s[],int i,int len)
{
    int c,j;

    j = len - (i + 1);

    if( i < j )
    {
        c = s[i];
        s[i] = s[j];
        s[j] = c;

        reverser(s,++i,len);
    }
}
int main(void) {
    char s[100]="pavani";

//    mgetline(s, MAXLINE);

    reverser(s,0,6);

    printf("%s", s);

    return 0;
}
