#include <stdio.h>
#include <stdlib.h>
#define MAXOP    100
#define NUMBER   '0'
#define MAXLINE 1000
int getop(char []);
void push(double);
double pop(void);
int getLine(char [], int);
char line[MAXLINE];
int line_i;
/* reverse Polish calculator */
int main(void)
{
    int type;
    double op2;
    char s[MAXOP];
    while (getLine(line, MAXLINE) != 0)
    {
        line_i = 0;
        while ((type = getop(s)) != '\0')
        {
            switch (type)
            {
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
                        printf("error: zero divisor\n");
                    break;
                case '%'  :
                    op2 = pop();
                    if (op2 != 0.0)
                        push((int)pop() % (int)op2);
                    else
                        printf("error:zero division error\n");
                    break;
                case '\n':
                    printf("\t%.8g\n", pop());
                    break;
                default:
                    printf("error: unknown command \'%s\'\n", s);
                    break;
            }
        }
    }
    return 0;
}
/* push and pop operations on stack */
#define MAXVAL   100
int sp = 0;
double val[MAXVAL];
void push(double f)
{
    if (sp < MAXVAL)
        val[sp++] = f;
    else
        printf("error: stack full, can't push %g\n", f);
}
double pop(void)
{
    if (sp > 0)
        return val[--sp];
    else
        printf("error: stack empty\n");
    return 0.0;
}

/* getLine:  get line into s, returns length */
int getLine(char s[], int lim)
{
    int c, i;

    i = 0;
    while (--lim > 0 && (c = getchar()) != EOF && c != '\n')
        s[i++] = c;
    if (c == '\n')
        s[i++] = c;
    s[i] = '\0';

    return i;
}
/* getop:  get next character or numeric operand */

#include <ctype.h>
int getop(char s[])
{
    int i, c;
    while ((s[0] = c = line[line_i++]) == ' ' || c == '\t')
        ;s[1] = '\0';
    if (!isdigit(c) && c != '.')
        return c;
    i = 0;
    if (isdigit(c))
        while (isdigit(s[++i] = c = line[line_i++]))
            ;
    if (c == '.')
        while (isdigit(s[++i] = c = line[line_i++]))
            ;
    s[i] = '\0';
    line_i--;
    return NUMBER;
