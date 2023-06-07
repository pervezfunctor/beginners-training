#include <stdio.h>
#define LIM 40
int reverse(char line[], int size);
int main() {
    char line[LIM];
    int len;
    printf("Enter the  string to reverse:\n");
    while (reverse(line, LIM) > 0) {
        continue;
    }
    return 0;
}
int reverse(char s[], int size) {
    char rev[size];
    int i,  c, len;
    for (i = 0; i <=  size && (c = getchar()) != EOF && c != '\n'; i++) {
        s[i] = c;
    }
    len = i;
    s[i] = '\0';
    for (i = 0; i < len; i++) {
        rev[len - i - 1] = s[i];
    }
    rev[i] = '\0';
    printf("the reversed string is:%s\n", rev);
    printf("the length of the reversed string is:%d\n", len);
    return 0;
}