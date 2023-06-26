#include <stdio.h>
#include <string.h>
int strend(char *s, char *t) {
    int len;
    len = strlen(t);
    while (*s != '\0')
        ++s;
    --s;

    while (*t != '\0')
        ++t;

    --t;
    while (len > 0) {
        if (*t == *s) {
            --t;
            --s;
            --len;
        } else
            return 0;
    }
    if (len == 0)
        return 1;
}
int main() {
    char s[100];
    char t[100];
    printf("string1:");
    scanf("%s", s);
    printf("string2:");
    scanf("%s", t);
    if(strend(s, t))
        printf("1");
    else
        printf("0");
    return 0;
}