#include <stdio.h>
#define TAB_REPLACE 7
int main()
{
    int position=1,blanks=0,c;
    while((c=getchar())!=EOF){
        if(c=='\t')
        {
            blanks=TAB_REPLACE-((position-1)%TAB_REPLACE);
            while(blanks>0) {
                printf("#");
                position++;
                blanks--;
            }
        }
        else if(c=='\n')
        {
            putchar(c);
            position=1;
        }
        else
        {
            putchar(c);
            position++;
        }
    }
    return 0;
}