#include <stdio.h>
#include <string.h>

void reverse(char s[]) {
    int length = strlen(s);
    int i, j;
    char temp;

    for (i = 0, j = length - 1; i < j; i++, j--) {
        temp = s[i];
        s[i] = s[j];
        s[j] = temp;
    }
}

void itoa(int n, char s[], int w) {
    int i, sign;
    if ((sign = n) < 0)
        n = -n;
    i = 0;
    do {
        s[i++] = n % 10 + '0';
    } while ((n /= 10) != 0);

    if (sign < 0)
        s[i++] = '-';
    while (i < w)
        s[i++] = ' ';

    s[i] = '\0';
    reverse(s);
}

int main() {
    int n;
    int w;
    printf("enter any number:");
    scanf("%d", &n);
    char s[100];
    printf("enter the width:");
    scanf("%d",&w);
    itoa(n,s,w);
    printf("after padding:%s\n",s);
    return 0;
}