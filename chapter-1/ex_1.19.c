#include<stdio.h>

int gline(char s[]);
void reverse(char s[],int len);

int main() {
    char s[100];
    int len;
    while((len = gline(s))>0) {
        reverse(s, len);
        printf("reversed:%s", s);
    }
    return 0;
}

int gline(char s[]) {
    int c, i = 0;
    while( (c = getchar()) != EOF){
        s[i] = c;
        ++i;
    }
    s[i]='\0';
    return i;
}

void reverse(char s[], int len){
    int i=len,j=0;
    char temp;
    if(s[i]=='\0')--i;
    if(s[i]=='\n')--i;
    while(j<i){
        temp=s[j];
        s[j]=s[i];
        s[i]=temp;
        --i;
        ++j;
    }
}