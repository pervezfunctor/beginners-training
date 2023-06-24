//
// Created by technoidentity on 21/6/23.
//
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#define MAXOP 100
#define NUMBER '0'
#define MAXVAL 100
#define NAME 'n'


int getop(char []);
void push(double);
double pop(void);
void mathfnc(char s[]);
void clear();
int val[MAXVAL];
/* reverse Polish calculator */
int main()
{
    double temp=0, temp2=0,v;
    int i,var=0;
    int type;
    double op2;
    char s[MAXOP];
    double variable[26];
    for(i=0;i<26;i++)
        variable[i]=0.0;
    while ((type = getop(s)) != EOF) {
        switch (type) {
            case NUMBER:
                push(atof(s));
                break;

            case NAME:
                mathfnc(s);
                break;

            case '+':
                push(pop() + pop());
                break;

            case '*':
                push(pop() * pop());
                break;

            case '-':
                op2 = pop();
                push(pop()-op2);
                break;

            case '/':
                op2 = pop();
                if (op2 != 0.0) {
                    push(pop() / op2);
                }
                else
                    printf("error: zero divisor\n");
                break;

            case '%':
                op2 = pop();
                if(op2 != 0.0) {
                    push((int) pop() % (int) op2);
                }
                else
                    printf("error");
                break;

            case '=':
                pop();
                if(var >= 'A' && var <= 'Z' )
                    variable[var-'A'] = pop();
                else
                    printf("error : no variable name");

            case '\n':
                v=pop();
                printf("\t%.8g\n", v);
                break;

            case 'c':
                clear();
                break;

            case 'p':
                temp=pop();
                printf("stack value=%lf\n",temp);
                push(temp);
                break;

            case 's':
                    temp=pop();
                    temp2=pop();
                    push(temp2);
                    push(temp);
                break;

            default:
                if(type >= 'A' && type <= 'Z')
                    push(variable[type - 'A']);
                else if(type == 'v')
                    push(v);
                else
                printf("error: unknown command %s\n", s);
                break;
        }
        var=type;
    }
    return 0;
}
int sp = 0;

/* maximum depth of val stack */
/* next free stack position */
/* value stack */
/* push: push f onto value stack */
void push(double f)
{
    if (sp < MAXVAL)
        val[sp++] = f;
    else
        printf("error: stack full, can't push %g\n", f);
}
/* pop: pop and return top value from stack */
double pop(void)
{
    if (sp >= 0)
        return val[--sp];// sp value decreases
    else {
        printf("error: stack empty\n");
        return 0.0;
    }
}
#include <ctype.h>
int getch(void);
void ungetch(int);

int getop(char s[])
{
    int i, c;
    while ((s[0] = c = getch()) == ' ' || c == '\t');
    s[1] = '\0';
    i = 0;
    if (islower(c)) {
        while (islower(s[++i] = c = getch()));;
        s[i] = '\0';
        if (c != EOF)
            ungetch(c);
        if (strlen(s) > 1)
            return NAME;
        else
            return s[0];
    }



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

#define BUFSIZE 100
char buf[BUFSIZE];
int bufp = 0;
/* buffer for ungetch */
/* next free position in buf */

int getch(void) /* get a (possibly pushed-back) character */
{
    return (bufp > 0) ? buf[--bufp] : getchar();
}

void ungetch(int c)
/* push character back on input */
{
    if (bufp >= BUFSIZE)
        printf("ungetch: too many characters\n");
    else {
        buf[bufp++] = c;
    }
}

void clear(){
    sp=0;
}

void mathfnc(char s[]) {
    double op2;
    if (strcmp(s, "sin") == 0)
        push(sin(pop()));
    else if (strcmp(s, "cos") == 0)
        push(cos(pop()));
    else if (strcmp(s, "exp") == 0)
        push(exp(pop()));
    else if (strcmp(s, "pow") == 0) {
        op2 = pop();
        push(pow(pop(), op2));
    } else
        printf("error: %s is not supported\n", s);
}