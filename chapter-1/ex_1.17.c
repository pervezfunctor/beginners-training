#include<stdio.h>
#define MINLENGTH 80
#define MAXLENGTH 1000

int getline1(char line[],int maxlength);

int main() {
    int len;
    char line[MAXLENGTH];
    while((len = getline1(line,MAXLENGTH))>0)
        if(len > MINLENGTH)
            printf("%s",line);
}

int getline1(char s[],int lim) {
    int i,c;
    for(i=0;i<lim-1&&(c=getchar())!=EOF&&c!='\n';++i) {
        s[i]=c;
    }

    if(c=='\n') {
        s[i]=c;
        ++i;
    }
    s[i]='\0';

    return i;
}