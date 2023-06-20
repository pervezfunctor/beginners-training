//
// Created by technoidentity on 20/6/23.
//
//copies the string t to the end of s
#include <stdio.h>
void str_cat(char *s,char *t);
int main(){
    char s[100];
    char t[100];
    printf("enter string1:%s",s);
    scanf("%s",s);
    printf("enter string2:%s",t);
    scanf("%s",t);
    str_cat(s,t);
    printf("concatenated string:%s",s);
    return 0;
}
void str_cat(char *s,char *t){
    while(*s){
        s++;
    }
    while((*s=*t)){
        s++;
        t++;

    }

}