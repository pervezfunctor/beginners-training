//
// Created by technoidentity on 15/6/23.
//
//function strindex(s,t) which returns the position of the rightmost occurrence of t in s
#include <stdio.h>
#include<string.h>
int strindex(const char *s,const char *t){
    int slen=strlen(s);
    int tlen=strlen(t);
    int i=slen-tlen;
    while(i>=0){
        int j=0;
        while(j<tlen && s[i+j]==t[j])
            j++;
        if(j==tlen)
            return i;
        i--;
    }
    return -1;
}
int main(){
     char s[100];
     char t[100];
    printf("enter the string:");
    scanf("%s",&s);
    printf("enter the string to be searched:");
    scanf("%s",&t);
    int idx=strindex(s,t);
    printf("string starting at index:%d\n",idx);
    return 0;
}