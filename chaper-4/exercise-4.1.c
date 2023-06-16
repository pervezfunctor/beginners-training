#include<stdio.h>
#include <string.h>
int strIndex(char *s,char *t)
{
    int s_length=strlen(s);
    int t_length=strlen(t);
    int i,j,k;
    for(i=s_length-1;i>=t_length-1;i--)
    {
        for(j=i,k=t_length-1;k>=0;j--,k--,j--);
        if(k==-1)
        {
            return i-t_length+1;
        }
        return -1;
    }
}
int main()
{
    char s[100];
    char t[100];
    printf("the string is :");
    scanf("%s",&s);
    printf("enter compared string :");
    scanf("%s",&t);
    int index1= strIndex(s,t);
    printf("index of the occurrence sring is : %d\n",index1);
}