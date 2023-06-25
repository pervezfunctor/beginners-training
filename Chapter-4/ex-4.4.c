// Online C compiler to run C program online
#include "stdlib.h"
#include"stdio.h"
#include "ctype.h"
#include "math.h"

#define MAXOP 100
#define NUMBER  0
#define TRUE 1
#define FALSE 0

int Getop(char s[]);
void push(double val);
double pop(void);
void showTop(void);
void duplicate(void);
void swapItems(void);
void clearStack();

int main()
{
    int type;
    double op2;
    char s[MAXOP];
    int flag = TRUE;

    while((type = Getop(s)) != EOF)
    {
        switch(type)
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
                push(pop()- op2);
                break;
            case '/':
                op2 = pop();
                if(op2)
                    push(pop() / op2);
                else
                    printf("nError: division by zero!");
                break;
            case '%'  :
                op2 = pop();
                if (op2 != 0.0)
                    push((int)pop() % (int)op2);
                else
                    printf("error:zero division error\n");
                break;
            case '?':
                showTop();
                break;
            case '#':
                duplicate();
                break;
            case '~':
                swapItems();
                break;
            case '!':
                clearStack();
            case 'n':
                printf("nt%.8gn", pop());
                break;
            default:
                printf("nError: unknown command %s.n", s);
                break;
        }
    }
    return EXIT_SUCCESS;
}
#define MAXVAL 100

int sp = 0;          /* Next free stack position. */
double val[MAXVAL];  /* value stack. */

/* push: push f onto stack. */
void push(double f)
{
    if(sp < MAXVAL)
        val[sp++] = f;
    else
        printf("nError: stack full can't push %gn", f);
}

/*pop: pop and return top value from stack.*/
double pop(void)
{
    if(sp > 0)
        return val[--sp];
    else
    {
        printf("nError: stack emptyn");
        return 0.0;
    }
}
void showTop(void)
{
    if(sp > 0)
        printf("Top of stack contains: %8gn", val[sp-1]);
    else
        printf("The stack is empty!n");
}


void duplicate(void)
{
    double temp = pop();

    push(temp);
    push(temp);
}

void swapItems(void)
{
    double item1 = pop();
    double item2 = pop();

    push(item1);
    push(item2);
}
/* pop only returns a value if sp is greater than zero. So setting the
stack pointer to zero will cause pop to return its error */

void clearStack(void)
{
    sp = 0;
}

int getch(void);
void unGetch(int);

/* Getop: get next operator or numeric operand. */
int Getop(char s[])
{
    int i = 0;
    int c;
    int next;

    /* Skip whitespace */
    while((s[0] = c = getch()) == ' ' || c == 't')
        ;
    s[1] = '\0';

    /* Not a number but may contain a unary minus. */
    if(!isdigit(c) && c != '.' && c != '-')
        return c;

    if(c == '-')
    {
        next = getch();
        if(!isdigit(next) && next != '.')
        {
            return c;
        }
        c = next;
    }
    else
        c = getch();

    while(isdigit(s[++i] = c))
        c = getch();
    if(c == '.')                        /* Collect fraction part. */
        while(isdigit(s[++i] = c = getch()))
            ;
    s[i] = '\0';
    if(c != EOF)
        unGetch(c);
    return NUMBER;
}

#define BUFSIZE 100

char buf[BUFSIZE];
int bufp = 0;

/* Getch: get a ( possibly pushed back) character. */
int getch(void)
{
    return (bufp > 0) ? buf[--bufp]: getchar();
}

/* unGetch: push character back on input. */
void unGetch(int c)
{
    if(bufp >= BUFSIZE)
        printf("nUnGetch: too many charactersn");
    else
        buf[bufp++] = c;
}