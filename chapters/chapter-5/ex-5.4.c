#include <stdio.h>
#include <string.h>

int strend(char *s,char *t);

int main(){
    char s[100];
    char t[100];
    printf("enter string1:");
    scanf("%s",s);
    printf("enter string2:");
    scanf("%s",t);
    strend(s,t);
    printf("%d", strend(s,t));
    return 0;
}

int strend(char *s,char *t){
    char *ss=s;
    char *ts=t;
    while(*ss){
        t=ts;
        for(s=ss;*s==*t;s++,t++){
            if(*s=='\0'&& *t=='\0'){
                return 1;
            }
        }
        ss++;
    }
    return 0;
}