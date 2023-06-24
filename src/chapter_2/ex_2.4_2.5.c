//
// Created by technoidentity on 14/6/23.
//

#include <stdio.h>
int squeeze(char s1[],const char s2[]);
int any(char s1[],const char s2[]);
int main(){
    char s1[10]={'j','z','a','i','d','a','i','p'};
    char s2[10]={'x','t','i','f','a'};
    printf("%d",any(s1,s2));
    squeeze(s1,s2);
    any(s1,s2);
    printf("%s",s1);
}
int squeeze(char s1[], const char s2[]) {
    int j, k;
    for(int i = 0; s1[i] != '\0'; i++) {
        for(j = 0; s2[j] != '\0'; j++) {
            if(s1[i] == s2[j]) {
                for (k = i; s1[k] != '\0'; k++)
                    s1[k] = s1[k + 1];
            }
        }
    }
    return 0;
}

int any(char s1[],const char s2[]){
    int j;
    char temp;
    for(int i = 0; s1[i] != '\0'; i++){
        for(j = 0; s2[j] != '\0'; j++){
            if(s1[i] == s2[j]) {
                return i;
            }
        }
    }
    return -1;
}