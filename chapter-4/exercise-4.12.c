//
// Created by technoidentity on 22/6/23.
//
//recursive version of itoa
#include <stdio.h>
void reverse(char str[],int length){
    int start=0;
    int end=length-1;
    while(start<end){
        char temp=str[start];
        str[start]=str[end];
        str[end]=temp;
        start++;
        end--;
    }
}
void itoa(int n,char str[]){
    int isNegative=0;
    int i=0;
    if(n==0){
        str[i++]='0';
        str[i]='\0';
        return;
    }
    if(n<0){
        isNegative=1;
        n=-n;
    }
    while(n!=0){
        int rem=n%10;
        str[i++]=rem+'0';
        n=n/10;
    }
    if(isNegative){
        str[i++]='-';
    }
    str[i]='\0';
    reverse(str,i);
}
int main(){
    int n;
    printf("enter the number:");
    scanf("%d",&n);
    char str[100];
    itoa(n,str);
    printf("the string is:%s\n",str);
    return 0;
}