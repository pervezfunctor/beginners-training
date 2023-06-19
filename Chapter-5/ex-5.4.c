#include <stdio.h>
#include <string.h>
int str_len(char *s)
{
    int n;
    for(n = 0; *s != '\0' ;s++)
    {
        n++;
    }
    return n;
}
int str_cmp(char *s,char *t)
{
    for(;*s == *t; s++, t++)
        if(*s == '\0')
            return 0;
    return *s - *t;
}
int str_end(char *s, char *t){
    int res = 0;
    int s_len = 0;
    int t_len = 0;
    s_len = str_len(s);
    t_len = str_len(t);
    if(t_len <= s_len){
        s+= s_len - t_len;
        if(0 == str_cmp(s,t))
        {
            res = 1;
        }
    }
    return res;
}
int main()
{
    char str1[100];
    char str2[100];
    printf("enter the first string:");
    scanf("%s",str1);
    printf("enter the second string:");
    scanf("%s",str2);
    if(str_end(str1,str2)){
        printf("1");
    }else{
        printf("0");
    }
    return 0;
}