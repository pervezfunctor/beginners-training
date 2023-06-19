#include <stdio.h>
#include<string.h>
void str_cat(char *s, char *t)
{
    while((*s) != '\0'){
        s++;
    }
    while((*s = *t) != '\0')
    {
        s++;
        t++;
    }
}
int main(){
    char str1[100];
    char str2[100];
    printf("enter the first string:");
    scanf("%s",str1);
    printf("enter the second string:");
    scanf("%s",str2);
    str_cat(str1,str2);
    printf("the combined string is:%s",str1);
    return 0;
}