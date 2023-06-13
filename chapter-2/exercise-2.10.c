//
// Created by technoidentity on 13/6/23.
//
//program Rewrite the function lower, which converts upper case letters to lower case, with a conditional expression instead of if-else.
#include<stdio.h>
char lower(char c){
    return (c>='A' && c<='Z')?(c+('a'-'A')):c;
}
int main(){
    char upper_case,lower_case;
    printf("enter uppercase char:\n");
    scanf("%c",&upper_case);
    lower_case=lower(upper_case);
    printf("lower_case char:%c\n",lower_case);
    return 0;
}