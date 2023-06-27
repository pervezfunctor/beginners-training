//
// Created by technoidentity on 27/6/23.
//
#include <stdio.h>
void reverse(int s[]);
int main(){
    int s[]={2,8,7,4,5,6,9,1};
    reverse(s);
}

void reverse(int s[]){
    int temp=0 ,len=0 ;
    while(s[len]!='\0') len++;

    for(int i = 0; i < len;i++,len--){
      temp=s[i];
      s[i]=s[len-1];
      s[len-1]=temp;
  }
}