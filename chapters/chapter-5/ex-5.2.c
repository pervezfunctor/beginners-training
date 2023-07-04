#include <stdio.h>
#include <ctype.h>
#define SIZE 100

int getch(void);
void ungetch(int c);
int getfloat(float *pn);

int main() {
    float n;
    int result;
    result = getfloat(&n);

    if (result != 0) {
        printf("Valid floating-point representation: %f\n", n);
    } else {
        printf("Invalid representation\n");
    }

    return 0;
}

char buffer[SIZE];
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

int getfloat(float *pn) {
    int c, sign;
    float pow=1.0;

    while (isspace(c = getch()));

    if (!isdigit(c) && c != EOF && c != '+' && c != '-') {
        ungetch(c);
        return 0;
    }

    sign = (c == '-') ? -1 : 1;

    if (c == '+' || c == '-') {
        int next = getch();
        if (!isdigit(next)) {
            ungetch(next);
            ungetch(c); 
            return 0;
        } else {
            c = next;
        }
    }

    for (*pn = 0.0; isdigit(c );c= getch()) {
        *pn = 10.0 * *pn + (c - '0');
    }
    if(c=='.'){
        for(pow=1.0;isdigit(c=getch());pow *=10.0){
            *pn = 10.0 * *pn + (c-'0');
        }
    }
    *pn *= sign/pow;

    if (c != EOF) {
        ungetch(c);
    }

    return c;
}