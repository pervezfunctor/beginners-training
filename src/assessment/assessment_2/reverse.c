//
// Created by technoidentity on 27/6/23.
//
#include <stdio.h>
void reverse(int s[],int len);
void reverse1(int s[],int i,int len);
int main(){
    int len = 0, k = 0;
    int s[]={2,8,7,4,5,6,9,1,0,8,3,4,6};
    len = sizeof(s) / sizeof(s[0]);

    reverse1(s,k, len);

    for (int i = 0;i < len ; i++)
        printf("%d",s[i]);
}

void reverse(int s[],int len){
    int temp=0  ;
    for(int i = 0; i < len; i++, len--) {
      temp=s[i];
      s[i]=s[len-1];
      s[len-1]=temp;
  }
}

