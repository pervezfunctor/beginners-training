#include <stdio.h>
#include <string.h>

#define MAXLINES 5000
#define MAXSTOR 10000

char *lineptr[MAXLINES];

int readlines(char *lineptr[], char *linestor, int maxlines, int maxline);
void writelines(char *lineptr[], int nlines);
void qsort(char *lineptr[], int left, int right);

/*  sort input lines*/



#define MAXLINE 1000        /*  maximum length of line    */

char *alloc(int);
int getline3(char *s, int lim);
void strcpy1(char *s, char *t);


int readlines(char *lineptr[], char *linestor, int maxlines, int maxline)
{
    int len, nlines;
    nlines = 0;
    char *p = linestor;
    char *linestop = linestor + maxline;

    for (; nlines < maxlines; nlines++)
    {
        if ((len = getline3(p, maxline)) <= 2)
            break;

        if (p + len > linestop)
            return -1;

        p[len - 1] = '\0';
        lineptr[nlines] = p;
        p += len;
    }

    printf("nlines: %d\n", nlines);
    return nlines;
}

#define ALLOCSIZE 10000
static char allocbuf[ALLOCSIZE];
static char *allocp = allocbuf;

char *alloc(int n)
{
    if(ALLOCSIZE + allocbuf >= n + allocp)
    {
        allocp += n;
        return allocp - n;
    }
    else
        return 0;
}

int getline3(char *s, int lim)
{
    int c;
    char *p;

    for (p = s; lim > 1; lim--)
    {
        if ((c = getchar()) == EOF)
            break;

        *p++ = c;

        if (c == '\n')
            break;
    }

    *p = '\0';

    return (int)(p - s);
}




void writelines(char *lineptr[], int nlines)
{
    for (int i = 0; i < nlines; i++)
    {
        printf("%s\n", lineptr[i]);
    }
}

void qsort(char *v[], int left, int right)
{
    int i, last;
    void swap(char *v[], int i, int j);

    if(left >= right)
        return;
    swap(v, left, (right+left)/2);
    last = left;
    for (i = left + 1; i <= right; i++) {
        if (strcmp(v[i], v[left]) < 0) {
            swap(v, i, ++last);
        }
    }
    swap(v, left, last);
    qsort(v, left, last-1);
    qsort(v, last + 1, right);
}

void swap(char *v[], int i, int j)
{
    char *temp;

    temp = v[i];
    v[i] = v[j];
    v[j] = temp;
}

int main(){
    char s[100];
    char t [100];
    char c[100];
    //char *lineptr[MAXLINES];
    int nlines;
    printf("string1:");
    scanf("%s",s);
    printf("String2:");
    scanf("%s",t);
    printf("string3:");
    scanf("%s",c);

    lineptr[0] = s;
    lineptr [1] =t;
    lineptr[2] = c;
    nlines =3;
    qsort(lineptr, 0,nlines-1);
    printf("\nsortedlines:\n");
    for(int i =0;i<nlines; i++)
    {
        printf("%s\n",lineptr[i]);
    }
return 0;
}