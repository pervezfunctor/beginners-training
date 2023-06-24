//
// Created by technoidentity on 23/6/23.
//
//Modify getop so that it doesn't need to use ungetch
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define MAXOP 100
#define NUMBER '0'
int getop(char []);
void push(double);
double pop(void);
/* reverse Polish calculator */
int main()
{
    int type;
    double op1,op2;
    char s[MAXOP];
    while ((type = getop(s)) != EOF) {
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
                    printf("error: zero divisor\n");
                break;
            case '%':
                op2=pop();
                if(op2!=0.0)
                    push((int)pop() % (int)op2);
                else
                    printf("error: zero division \n");
                break;
            case '\n':
                printf("\t%.8g\n", pop());break;
            default:
                printf("error: unknown command %s\n", s);
                break;
        }
    }
    return 0;
}
#define MAXVAL 100
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
    else {
        printf("error: stack empty\n");
        return 0.0;
    }
}
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define NUMBER  '0'
int getch(void);
int getop(char s[])
{
    int i;
    static int c=' ';
   while(c==' ' || c=='\t')
       c=getch();
   s[0]=c;
   s[1]='\0';
   if(!isdigit(c)&&c!='.'&&c!='-'){
       int toReturn=c;
       c=' ';
       return toReturn;
   }
   i=0;
   if(c=='-' || isdigit(c))
       while(isdigit(s[++i]=c=getch()));
   if(c=='.')
       while(isdigit(s[++i]=c=getch()));
   s[i]='\0';
   if(i==1 && s[0]=='-')
       return '-';
   return NUMBER;
}
#define BUFSIZE 100
char buf[BUFSIZE];
int bufp = 0;
int getch(void)
{
    return (bufp > 0) ? buf[--bufp] : getchar();
}
