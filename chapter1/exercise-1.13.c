#include <stdio.h>
#define MAX_LENGTH 20
int main()
{
    int wordLength[MAX_LENGTH]={0};
    int maxLength=0;
    char c;
    int length=0;
    while ((c=getchar())!=EOF)
    {
        if(c==' ' || c=='\n')
        {
            if(length>0 && length<MAX_LENGTH)
            {
                wordLength[length]++;
                if(length>=maxLength)
                {
                    maxLength=length;
                }
            }
            length=0;
        }
        else{
            length++;
        }
    }
    printf("histogram \n");
    for(int i=1;i<=maxLength;i++){
        printf("%2d",i);
        for(int j=0;j<wordLength[i];j++){
            printf("#");
        }
        printf("\n");
    }
    return 0;
}