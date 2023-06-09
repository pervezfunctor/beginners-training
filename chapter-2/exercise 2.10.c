#include <stdio.h>
void lowerCase(char* str)
{
    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]>='A' && str[i]<='Z')
        {
            str[i]=str[i]+('a'-'A');
        }
    }
}
int main()
{
    char input_sentence[100];
    printf("enter a string: ");
    scanf("%99[^\n]",input_sentence);
    printf("original %s\n",input_sentence);
    lowerCase(input_sentence);
    printf("output %s:\n",input_sentence);
}