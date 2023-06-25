#include <stdio.h>
#include <ctype.h>
#define SIZE 100
int getch(void);
void ungetch(int c);
int getint(int *pn);
int main() {
    int n, result;
    result = getint(&n);

    if (result != 0) {
        printf("Valid representation: %d\n", n);
    } else {
        printf("Invalid representation\n");
    }
    return 0;
}char buffer[SIZE];
int bufp = 0;
int getch(void) {
    return (bufp > 0) ? buffer[--bufp] : getchar();
}
void ungetch(int c) {
    if (bufp >= SIZE) {
        printf("Error: Buffer is full\n");
    } else {
        buffer[bufp++] = c;
    }
}
int getint(int *pn) {
    int c, sign;
    while (isspace(c = getch()))
        ;
    if (!isdigit(c) && c != EOF && c != '+' && c != '-') {
        ungetch(c); // Push back non-digit character
        return 0;
    }
    sign = (c == '-') ? -1 : 1;
    if (c == '+' || c == '-') {
        int next = getch();
        if (!isdigit(next)) {
            ungetch(next); // Push back non-digit character
            ungetch(c); // Push back '+' or '-' character
            return 0;
        } else {
            c = next;
        }
    }
    int value = 0;
    for (*pn = 0; isdigit(c); c = getch()) {
        *pn = 10 * *pn + (c - '0');
    }
    *pn *= sign;
    if (c != EOF) {
        ungetch(c);
    }
    return c;
}