#include <stdio.h>
#include <stdlib.h>

int htoi(char s[]);

int main(void)
{
    char s[1024];
    int i, ch;
    for (i=0; (ch = getchar()) != '\n'; i++)
        s[i] = ch;
    s[i] = '\0';
    printf("%s: %d\n", s, htoi(s));
    return 0;
}


int htoi(char s[])
{
    int i;
    int c, n;

    n = 0;
    for (i = 0; (c = s[i]) != '\0'; ++i) {
        n *= 16;
        if (i == 0 && c == '0') {
            /* Drop the 0x of 0X from the start of the string. */
            c = s[++i];
            if (c != 'x' && c != 'X')
                --i;
        } else if (c >= '0' && c <= '9')
            /* c is a numerical digit. */
            n += c - '0';
        else if (c >= 'a' && c <= 'f')
            /* c is a letter in the range 'a'-'f' */
            n += 10 + (c - 'a');
        else if (c >= 'A' && c <= 'F')
            /* c is a letter in the range 'A'-'F' */
            n += 10 + (c - 'A');
        else
            /* invalid input */
            return n;
    }
    return n;
}
