#include <stdio.h>
#include<string.h>

int strn_cmp(const char *s,const char *t,size_t n);
void strn_cpy(char *s,const char *t,size_t n);
void strn_cat(char *s,const char *t,size_t n)


int main(){
    char s[100];
    char t[100];
    printf("enter the string1:");
    scanf("%s",s);
    printf("enter the string2:");
    scanf("%s",t);
    strn_cpy(s,t,3);
    printf("string copy:%s\n",s);
    strn_cat(s,t,3);
    printf("string concat:%s\n",s);
    int res=strn_cmp(s,t,3);
    printf("string compare:%d\n", res);
    return 0;
}

void strn_cpy(char *s,const char *t,size_t n){
    size_t i;
    for(i=0;i < n && t[i] !='\0'; i++){
        s[i] = t[i];
    }
    for(;i<n;i++){
        s[i]='\0';
    }
}

void strn_cat(char *s,const char *t,size_t n){
    int i,j;
    for(i=0;s[i]!='\0';i++);
    for(j=0;j<n&&t[j]!='\0';j++){
        s[i+j]=t[j];
    }
    s[i+j]='\0';
}

int strn_cmp(const char *s,const char *t,size_t n){
    size_t i;
    for(i=0;i<n && (*s==*t);i++);
    if(*s=='\0'){
        return 0;
        s++;
        t++;
    }
    if(n==0)
        return 0;
    return(*s-*t);
}
