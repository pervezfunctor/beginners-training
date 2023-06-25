#include <stdio.h>
#include <string.h>
void reverse(char *s, int start, int end) {
    if (start >= end)
        return;
    char temp = s[start];
    s[start] = s[end];
    s[end] = temp;
    reverse(s, start + 1, end - 1);
}
int main() {
    char str[100];
    int length = strlen(str);
    printf("enter the string:");
    scanf("%s",&str);
    reverse(str, 0, strlen(str) - 1);
    printf("After reverse: %s\n", str);
    return 0;
}
