#include<stdio.h>
int str_cat(char *s, char *t) {
    while ((*s) != '\0'){
        s++;
    }
    while ((*s = *t) != '\0'){
        s++;
        t++;
    }
    return 0;
}

    int main(){
    char s[100];
    char t[100];
    printf("enter string1:");
    scanf("%s",s);
    printf("enter string2:");
    scanf("%s",t);
    str_cat(s,t);
    printf("concat string:%s", s);
    return 0;
}
