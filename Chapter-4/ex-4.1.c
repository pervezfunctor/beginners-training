#include <stdio.h>
#include<string.h>
int str_idx(char *s, char *t){
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
    char str1[100];
    char str2[100];
    printf("enter the string:");
    scanf("%s",str1);
    printf("enter the string to be searched:");
    scanf("%s",str2);
    int idx=str_idx(str1,str2);
    printf("string starting at index:%d\n",idx);
    return 0;
}