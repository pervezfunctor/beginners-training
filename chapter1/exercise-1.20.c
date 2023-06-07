#include <stdio.h>
#define TAB_REPLACE 5
int main()
{
    int blanks,position,c;
    blanks=0;
    position=1;
    while ((c=getchar())!=EOF){
        if(c=='\t'){
            blanks=TAB_REPLACE -((position-1)%TAB_REPLACE);
            while (blanks>0){
                putchar('@');
                ++position;
                --blanks;
            }
        } else if(c=='\n'){
            putchar(c);
            position=1;
        } else{
            putchar(c);
            ++position;
        }
    }
    return 0;
}
