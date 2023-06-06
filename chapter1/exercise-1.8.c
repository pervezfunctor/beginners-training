#include <stdio.h>
int main()
{
    int nb=0,nt=0,nl=0,c;
    printf("enter some text:");
    while ((c=getchar())!=EOF)
    {
        if(c==' ')
            nb++;
        else if(c=='\t')
            nt++;
        else if(c=='\n')
            nl++;
    }
    printf("no of blanks:%d \n",nb);
    printf("no of tabs:%d \n",nt);
    printf("no of newlines:%d \n",nl);

    return 0;
}