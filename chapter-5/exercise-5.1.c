#include <stdio.h>
#include <ctype.h>
#define BUF_SIZE 100
int get_ch(void);
void ungetch(int c);
int getint(int *pn);
char buf[BUF_SIZE];
int buf_p = 0;

int main() {
    int n;
    if (getint(&n))
        printf("valid input: %d\n", n);
    else
        printf("Invalid input\n");
    return 0;

}
int getch(void) {

    return (buf_p > 0) ? buf[--buf_p] : getchar();

}
void ungetch(int c) {

    if (buf_p >= BUF_SIZE)
        printf("ungetch: too many characters\n");
    else
        buf[buf_p++] = c;
}
int getint(int *pn) {

    int c, sign;
    while (isspace(c = getch())) ;
    if (!isdigit(c) && c != EOF && c != '+' && c != '-') {
        ungetch(c);
        return 0;
    }
    sign = (c == '-') ? -1 : 1;

    if (c == '+' || c == '-')

        c = getch();

    if (!isdigit(c)) {

        ungetch(c);  // Push the character back into input

        return 0;

    }
    for (*pn = 0; isdigit(c); c = getch())

        *pn = *pn * 10 + (c - '0');

    *pn *= sign;


    if (c != EOF)

        ungetch(c);


    return c;

}