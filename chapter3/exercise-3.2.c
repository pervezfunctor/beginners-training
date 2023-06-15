#include <stdio.h>
#define MAX_LINE 1000
int escape_Line(char line[], int maxline);
void escape(char s[], char t[]);
int main(void) {
    char s[MAX_LINE], t[MAX_LINE];
    escape_Line(t, MAX_LINE);
    escape(s, t);
    printf("%s", s);
    return 0;
}
void escape(char s[], char t[]) {
    int i, j;
    i = j = 0;
    while (t[i] != '\0') {
        switch (t[i]) {
            case '\t':
                s[j] = '\\';
                ++j;
                s[j] = 't';
                break;
            case '\n':
                s[j] = '\\';
                ++j;
                s[j] = 'n';
                break;
            default:
                s[j] = t[i];
                break;
        }
        ++i;
        ++j;
    }
    s[j] = '\0';
}
int escape_Line(char s[], int lim) {
    int i, c;
    for (i = 0; i < lim - 1 && (c = getchar()) != EOF; ++i)
        s[i] = c;
    s[i] = '\0';
}