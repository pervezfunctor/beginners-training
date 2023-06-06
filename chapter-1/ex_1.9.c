#include<stdio.h>

int main() {
    int c, lastc = 1;
    while ((c=getchar())!= EOF){
        if(c!=' ' || lastc!=' ')
            putchar(c);

        lastc = c;
    }

}

