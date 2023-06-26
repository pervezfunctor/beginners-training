#include <stdio.h>
#include <stdlib.h>
#define MAX 100
#define NUMBER '0'
int rpn(char s []);
void push(double f);
double pop(void);
int main() {
    int type;
    double op1, op2;
    char s[MAX];
    while ((type = rpn(s)) != EOF) {
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
                else {
                    printf("error: zero divisor\n");
                    return 1; // Exit if there's an error
                }
                break;
            case '%':
                op2 = pop();
                op1 = pop();
                if (op2 != 0.0)
                    push(op1 - op2 * (int)(op1 / op2));
                else {
                    printf("zero division error\n");
                    return 1; // Exit if there's an error
                }
                break;
            case '\n':
                printf("%.8g\n", pop());
                break;
            default:
                printf("error: unknown command %s\n", s);
                return 1; // Exit if there's an error
        }
    }
    return 0;
}
#define MAX_VAL 100
int sp = 0;
double val[MAX_VAL];
void push(double f)
{
    if (sp < MAX_VAL)
        val[sp++] = f;
    else
        printf("error: stack full, can not push %g\n", f);
}
double pop(void)
{
    if (sp > 0)
        return val[--sp];
    else {
        printf("error: stack empty\n");
        return 0.0;
    }
}
#include <ctype.h>
int getch(void);
void ungetch(int);
int rpn(char s[])
{
    int i, c;
    while ((s[0] = c = getch()) == ' ' || c == '\t')
        ;
    s[1] = '\0';
    i = 0;
    if (c == '-' && !isdigit(s[++i] = c = getch())) {
        ungetch(c);
        c = s[0];
    }

    if (!isdigit(c) && c != '.')
        return c;

    if (isdigit(c))
        while (isdigit(s[++i] = c = getch()))
            ;
    if (c == '.')
        while (isdigit(s[++i] = c = getch()))
            ;
    s[i] = '\0';

    if (c != EOF)
        ungetch(c);

    return NUMBER;
}
#define BUF_SIZE 100
char buf[BUF_SIZE];
int bufp= 0;
int getch(void)
{
    return (bufp > 0) ? buf[--bufp] : getchar();
}
void ungetch(int c)
{
    if (bufp > BUF_SIZE)
        printf("too many characters\n");
    else
        buf[bufp++] = c;
}