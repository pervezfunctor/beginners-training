#include <stdio.h>
void reverse(char s[],int i,int len){
    int c , j;
    j=len-(i+1);
    if(i<j){
        c=s[i];
        s[i]=s[j];
        s[j]=c;
        reverse(s,++i,len);
    }
}
int main(void) {
    char s[100]="ramya";
    reverse(s,0,5);
    printf("%s", s);
    return 0;
}
