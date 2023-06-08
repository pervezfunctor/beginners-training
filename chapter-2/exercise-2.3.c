//
// Created by technoidentity on 7/6/23.
//
//function htoi(s), which converts a string of hexadecimal digits into its equivalent integer value
#include <stdio.h>
#include <ctype.h>
int htoi(const char *s){
    int value=0;
    int i=0;
    if(s[i]=='0'&& (s[i+1]=='x' || s[i+1]=='X'))
        i=2;
    while(s[i]!='\0') {
        char c = toupper(s[i]);
        int digitvalue;
        if (isdigit(c))
            digitvalue = c - '0';
        else if (c >= 'A' && c <= 'F')
            digitvalue = 10 + (c - 'A');
        else {
            return 0;
        }
        value=(value*16)+digitvalue;
        i++;
    }
    return value;
}
int main(){
    const char input[100];
    printf("hexadecimal num:");
    scanf("%s",input);
    int result=htoi(input);
    printf("Decimal num: %d\n",result);
    return 0;
}