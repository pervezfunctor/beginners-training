#include <stdio.h>
#include <ctype.h>
#define BUF_SIZE 100
int getch(void);
void ungetch(int c);
int getint(int *pn);
char buf[BUF_SIZE];
int bufp = 0;
int main() {
    int n;
    if (getint(&n))
        printf("Integer: %d\n",n);
    else
        printf("Invalid input\n");
    return 0;
}
int getch(void) {
    return (bufp > 0) ? buf[--bufp] : getchar();
}
void ungetch(int c) {
    if (bufp >= BUF_SIZE)
        printf("too many characters\n");
    else
        buf[bufp++] = c;
}
int getint(int *pn) {
    int c, sign;
    while (isspace(c = getch()))
        ;
    if (!isdigit(c) && c != EOF && c != '+' && c != '-') {
        ungetch(c);
        return 0;
    }
    sign = (c == '-') ? -1 : 1;
    if (c == '+' || c == '-')
        c = getch();
    if (!isdigit(c)) {
        ungetch(c);
        return 0;
    }
    for (*pn = 0; isdigit(c); c = getch())
        *pn = *pn * 10 + (c - '0');
    *pn *= sign;
    if (c != EOF)
        ungetch(c);
    return c;
}