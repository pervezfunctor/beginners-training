#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include <math.h>
#define MAX 100
#define NUMBER '0'
#define BUF_SIZE 100
#define MAX_VAL 100
#define IDENTIFIER 1
#define TRUE 1


int bufp = 0;
int sp = 0;
double val[MAX_VAL];
char buf[BUF_SIZE];

int getch(void);
void ungetch(int);
int getop(char []);
void push(double);
double pop(void);
void clear(void);
void swap(void);
void math_fnc(char s[]);


int main(void) {
    int type;
    double op2, op1;
    char s[MAX];
    int flag = TRUE;

    while ((type = getop(s)) != EOF) {
        switch (type) {
            case NUMBER:
                push(atof(s));
                break;
            case IDENTIFIER:
                math_fnc(s);
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
            case '%':
                op2 = pop();
                op1 = pop();
                if (op2 != 0.0)
                    push(op1 - op2 * (int)(op1 / op2));
                else
                    printf("error: zero divisor\n");
                break;
            case 'p':
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
                swap();
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
        printf("error: stack full, can't push %g\n", f);
}

double pop(void) {
    if (sp > 0)
        return val[--sp];
    else {
        printf("error: stack empty\n");
        return 0.0;
    }
}

void clear(void) {
    sp = 0;
}

int getop(char s[]) {
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
            return IDENTIFIER;
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


int getch(void) {
    return (bufp > 0) ? buf[--bufp] : getchar();
}

void ungetch(int c) {
    if (bufp >= BUF_SIZE)
        printf("too many characters\n");
    else
        buf[bufp++] = c;
}

void swap(void) {
    double temp;

    if (sp < 2)
        printf("error: not enough elements to swap\n");
    else {
        temp = val[sp - 1];
        val[sp - 1] = val[sp - 2];
        val[sp - 2] = temp;
    }
}

void math_fnc(char s[]){
    double op2;

    if( 0 == strcmp(s, "sin"))
        push(sin(pop()));
    else if (0 == strcmp(s, "exp"))
        push(exp(pop()));
    else if(!strcmp(s, "pow"))
    {
        op2 = pop();
        push(pow(pop(), op2));
    }
    else
        printf("%s is not a supported function.\n", s);
}
