#include<stdio.h>
#include <ctype.h>
//#include <string.h>
int h_Toi(char *hex_string)
{
    int total_value=0,digit_val;
    if(hex_string[0]=='0' &&  hex_string[1]=='x' ||hex_string[1]=='X'){
        hex_string+=2;
    }
    while(*hex_string!='\0')
    {
        if(isdigit(*hex_string))
        {
            digit_val=*hex_string-'0';
        }  else if(*hex_string>='a' && *hex_string<='f')
        {
            digit_val=*hex_string-'a'+10;
        }
        else if(*hex_string>='A' && *hex_string<='F')
        {
            digit_val=*hex_string-'A'+10;
        }
        else
        {
            return -1;
        }
        total_value=total_value*16+digit_val;
        hex_string++;
    }
    return total_value;
}
int main()
{
    char hex_string[]="0x1A";
//    printf("enter a string : ");
//    scanf("%s\n",hex_string);
    int decimal_val= h_Toi(hex_string);
    printf("%d\n",decimal_val);
    return 0;
}