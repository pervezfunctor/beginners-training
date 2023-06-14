#include <stdio.h>
#include <ctype.h>
int htoi( const char *s) {
    int val , i = 0;
    if (s[0] == '0' && (s[1] == 'x' || s[1] == 'X'))
        i = 2;
    while (s[i] != '\0') {
        char c = tolower(s[i]);
        int digit;
        if (isdigit(c))
            digit = c - '0';
        else if (c >= 'a' && c <= 'f')
            digit = 10 + (c - 'a');
        else
            return -1;
        val = (val<< 4) + digit;
        i++;
    }
    return val;
}
int main() {
    const char hex_dec[100];
    printf("enter the format in hexadecimal:\n");
    scanf("%s", hex_dec);
    int res = htoi(hex_dec);
    printf("the decimal format is:%d ", res);
    return 0;
}



