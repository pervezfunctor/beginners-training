#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_OP 100
#define NUMBER '0'

#define BUF_SIZE 100

#define MAX_VAL 100

int sp = 0;
int bufp = 0;

double val[MAX_VAL];
char buf[BUF_SIZE];

int get_ch(void);

void unget_ch(int);

int get_op(char[]);

void push(double);

double pop(void);

/* reverse polish calculator */

int main(void) {
    int type;
    double op2,op1;
    char s[MAX_OP];

    while ((type = get_op(s)) != EOF) {
        switch (type) {
            case NUMBER:
                push(atof(s));
                break;
            case '+':
                push(pop() + pop());
                break;
            case '*':
                push(pop() * pop());
                break;
            case '-':
                op2 = pop();
                push(pop() - op2);
                break;
            case '/':
                op2 = pop();
                if (op2 != 0.0)
                    push(pop() / op2);
                else
                    printf("error:zero divisor\n");
                break;
            case '%':
                op2 = pop();
                if (op2 != 0.0)
                    push(op1-op2 *(int)(op1/op2));
                else
                    printf("erro:zero divisor\n");
                break;
            case '\n':
                printf("\t%.8g\n", pop());
                break;
            default:
                printf("error: unknown command %s\n", s);
                break;
        }
    }
    return 0;
}

void push(double f) {
    if (sp < MAX_VAL)
        val[sp++] = f;
    else
        printf("error:stack full, cant push %g\n", f);
}

double pop(void) {
    if (sp > 0)
        return val[--sp];
    else {
        printf("error: stack empty\n");
        return 0.0;
    }
}

int get_op(char s[]) {
    int i, c;
    while ((s[0] = c = get_ch()) == ' ' || c == '\t');
    s[1] = '\0';
    if (!isdigit(c) && c != '.' && c != '-')
        return c; // not a number
    i = 0;
    if (c == '-' || isdigit(c)) // collect integer part along with '-'
        while (isdigit(s[++i] = c = get_ch()));
    if (c == '.') // collect fraction part
        while (isdigit(s[++i] = c = get_ch()));
    s[i] = '\0';
    if (c != EOF)
        unget_ch(c);
    if (strcmp(s, "-") == 0)
        return '-';
    return NUMBER;
}

void unget_ch(int c) {
    if (bufp >= BUF_SIZE)
        printf("ungetch: too many characters\n");
    else
        buf[bufp++] = c;
}

int get_ch(void)
{
    return (bufp > 0) ? buf[--bufp] : getchar();
}
