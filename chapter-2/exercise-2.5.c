//
// Created by technoidentity on 8/6/23.
//
//function any(s1,s2) which returns the first location in the string
#include <stdio.h>
#include <string.h>
int any(char *s1,char *s2)
{
    int i, j;
    for(i = 0; i < strlen(s1); i++) {
        for(j = 0; j < strlen(s2); j++) {
            if(s1[i] == s2[j])
                break;
        }
        if(j != strlen(s2))
            break;
    }
    if(i == strlen(s1))
        return -1;
    else
        return i;
}
int main()
{
    char s1[100];
    char s2[100];
    printf("enter the string s1:");
    scanf("%s",s1);
    printf("enter the string s2:");
    scanf("%s",s2);
    int idx = any(s1,s2);
    if(idx != -1) {
        printf("First character %c matching at index %d\n",s1[idx], idx);
    }
    return 0;
}