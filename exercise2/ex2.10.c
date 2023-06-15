#include<stdio.h>
int lower(char c) {
    while (c >= 'A' && c <= 'Z') {
        c += 32;
    }
    return c;
}
int main() {

    char uppercase ;
    char lowercase;
    printf("enter uppercase:");
    scanf("%c",&uppercase);
    lowercase = lower(uppercase);
    printf("lowercase char:%c\n",lowercase);

    return 0;
}