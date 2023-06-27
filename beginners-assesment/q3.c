#include<stdio.h>
void reverse(int s[]);
int main(){
    int s[5]={1,8,3,5,9};
    reverse(s);
}
void reverse(int s[]) {
    int len, temp,i=0;
    for (len = 0; s[len] != '\0'; len++);
    len--;
 while(len>0 && len >i ){
        temp=s[len];
        s[len]=s[i];
        s[i]=temp;
        i++;
        len--;
    }
}