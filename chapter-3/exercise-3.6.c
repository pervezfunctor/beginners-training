//
// Created by technoidentity on 14/6/23.
//
//itoa, the converted number must be padded with blanks on the left
#include<stdio.h>
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
void itoa(int n,char str[],int width){
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
    while(i<width){
        str[i++]=' ';
    }
    str[i]='\0';
    reverse(str,i);
}
int main(){
    int n,width;
    printf("enter the number:");
    scanf("%d",&n);
    char str[100];
    printf("enter the width:");
    scanf("%d",&width);
    itoa(n,str,width);
    printf("padded string:%s\n",str);
    return 0;
}