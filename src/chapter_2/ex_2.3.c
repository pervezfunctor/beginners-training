//
// Created by technoidentity on 12/6/23.
//
#include <stdio.h>
int getNum(char c);
int htoi(char c[]);

int main() {
    char s[]={'A','E','F','\n'};
    printf("hexvalue:");
    scanf("%s",&s);
    printf("%d",htoi(s));
}

int htoi(char c[]){
    int i,temp=0;
    i=0;
        while(c[i]!='\n') {
            temp = (temp*16) + getNum(c[i]);
            i++;
        }
         return    temp ;
 }


int getNum(char c){
    char hex[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F','\n'};
    for(int j=0;hex[j]!='\n';j++){
        if(c==hex[j])
            return j;
    }
}