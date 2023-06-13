//
// Created by technoidentity on 8/6/23.
//
//an alternative version of squeeze(s1,s2) that deletes each character in s1 that matches any character in the string s2.
#include<stdio.h>
#define SIZE 100
void squeeze(char s1[], char s2[]) {
    int i, j, k;
    int found;
    for (i = j = 0; s1[i] != '\0'; i++) {
        found= 0;
        for (k = 0; s2[k] != '\0'; k++) {
            if (s1[i] == s2[k]) {
                found= 1;
                break;
            }
        }
        if (!found) {
            s1[j++] = s1[i];
        }
    }
    s1[j] = '\0';
}
int main() {
    char s1[SIZE];
    char s2[SIZE];
    printf("Enter the first string: ");
    scanf("%s", &s1);
    printf("Enter the second string: ");
    scanf("%s", &s2);
    squeeze(s1, s2);
    printf("Result: %s\n", s1);
    return 0;
}

