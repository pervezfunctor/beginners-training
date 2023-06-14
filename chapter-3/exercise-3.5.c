//
// Created by technoidentity on 14/6/23.
//
//the function itob(n,s,b) that converts the integer n into a base b character representation in the string s.
#include<stdio.h>
void itob(int n,char s[],int b){
    int i,sign;
    if((sign=n)<0)
        n=-n;
    i=0;
    do{
        int remainder =n%b;
        s[i++]=(remainder<10)? remainder+ '0':remainder+'A'-10;
    }while((n/=b)>0);
    if(sign<0)
        s[i++]='-';
    s[i]='\0';
    int start=0;
    int end=i-1;
    while(start<end){
        char temp=s[start];
        s[start]=s[end];
        s[end]=temp;
        start++;
        end--;
    }
}
int main(){
    int n;
    printf("enter the number:");
    scanf("%d",&n);
    char str[20];
    int base=16;
    itob(n,str,base);
    printf("%s\n",str);
    return 0;
}