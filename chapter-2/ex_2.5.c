#include<stdio.h>
int any(char s1[],char s2[]);
int main(){
    char s1[5]={'z','a','i','d'};
    char s2[5]={'a','b','b','y'};
    printf("%d",any(s1,s2));
    return 0;
}
int any(char s1[], char s2[]) {
    int i, j;
    for (i =0; s1[i] != '\0'; i++) {
        for (j = 0; s2[j] != '\0'; j++){
        if (s2[j] == s1[i]) {
            return i;
        }
        }
    }
    return -1;
}