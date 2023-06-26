//
// Created by technoidentity on 24/6/23.
//
#include<stdio.h>
#include<string.h>
void reverse (char s[]){
    static int i = 0;
    static int length;
    int j;
    char c;
    if ( i == 0){
        length = strlen(s);

    }
    j = length -(i+1);
    if(i<j){
        c = s[i];
        s[i] = s[j];
        s[j] = c;
        i++;
        reverse(s);
    }
    else{
        i = 0;
    }
}
int main(){
    char s[100];
    printf("enter a string:");
    scanf("%s",&s);
    reverse(s);
    printf("reversed string: %s", s);
    return 0;
}
