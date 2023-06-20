//
// Created by technoidentity on 20/6/23.
//
//copies the string t to the end of s
#include <stdio.h>
void strcat(char *s,char *t);
int main(){
    char s[100];
    char t[100];
    printf("enter string1:");
    scanf("%s",s);
    printf("enter string2:");
    scanf("%s",t);
    strcat(s,t);
    printf("concatenated string:%s",s);
    return 0;
}
void strcat(char *s,char *t){
    while(*s){
        s++;
    }
    while((*s=*t)){
        s++;
        t++;

    }

}