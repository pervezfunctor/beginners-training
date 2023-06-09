#include <stdio.h>

int main() {
    int lim = 10, c;
    int i=0,loop = 1;
    char s[lim];

    while (loop) {
        if(i >= lim) loop = 0;
        else if((c=getchar()) == '\n') loop = 0;
        else if(c == EOF) loop = 0;
        else {s[i] = c;
        ++i;}
    }

    printf("%s",s);

    return 0;
}
