#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#define MAX 100
#define NUMBER '0'
#define BUF_SIZE 100
#define MAX_VAL 100
int bufp = 0;
int sp = 0;
double val[MAX_VAL];
char buf[BUF_SIZE];
int getch(void);
void ungetch(int);
int get(char[]);
void push(double);
double pop(void);
int main(void) {
    int type;
    double op2, op1;
    char s[MAX];
    void clear(void);
    while ((type = get(s)) != EOF) {
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
                    push(op1 - op2 * (int)(op1 / op2));
                else
                    printf("erro:zero divisor\n");
                break;
            case '?':
                op2 = pop();
                printf("\t%.8g\n", op2);
                push(op2);
                break;
            case 'c':
                clear();
                break;
            case 'd':
                op2 = pop();
                push(op2);
                push(op2);
                break;
            case 's':
                op1 = pop();
                op2 = pop();
                push(op1);
                push(op2);
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
void clear(void) { sp = 0; }
int get(char s[]) {
    int i, c;
    while ((s[0] = c = getch()) == ' ' || c == '\t');
    s[1] = '\0';
    i = 0;
    if (!isdigit(c) && c != '.' && c != '-')
        return c;
    if (c == '-')
        if (isdigit(c = getch()) || c == '.')
            s[++i] = c;
        else {
            if (c != EOF)
                ungetch(c);
            return '-';
        }
    if (isdigit(c))
        while (isdigit(s[++i] = c = getch()));
    if (c == '.')
        while (isdigit(s[++i] = c = getch()));
    s[i] = '\0';
    if (c != EOF)
        ungetch(c);
    return NUMBER;
}
int getch(void) { return (bufp > 0) ? buf[--bufp] : getchar(); }

void ungetch(int c) {
    if (bufp >= BUF_SIZE)
        printf("too many characters\n");
    else
        buf[bufp++] = c;
}