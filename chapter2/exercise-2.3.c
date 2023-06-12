#include <stdio.h>
#include <ctype.h>
int h_toi(char * string){
    int value=0;
    int digit;
    if(string[0]=='0' && (string[1]=='X' || string[1]=="x" )){
        string+=2;
    }
    while (*string!='\0'){
        if(isdigit(*string)){
            digit=*string-'0';
        } else if(*string>='a' && string <='f'){
            digit=*string-'a'+10;
        } else if (*string>='A'  && string<='F' ){
            digit=*string-'A'+10;
        } else{
            return -1;
        }
        value=value*16+digit;
        string++;
    }
    return value;
}
int main(){
    char string[100];
    printf("enter string:");
    scanf("%S",string);
    int decimalValue= h_toi(string);
    printf("Hex %s\n",string);
    printf("decimal %d\n",decimalValue);
    return 0;
}