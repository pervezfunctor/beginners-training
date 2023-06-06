#include <stdio.h>
int main()
{
    int c;
    printf("enter some text:");
    while ((c=getchar())!=EOF)
    {
        if(c == '\t')
            printf("\\t");
        else if(c=='\b')
            printf("\\b");
        else if(c=='\\')
            printf("\\\\");
        else putchar(c);
    }
    return 0;
}