#include<stdio.h>
#define BLANK '-'


int main() {
        int c, replace;

        replace= BLANK;

        while ((c = getchar()) != EOF) {
            if (c == ' ') {
                if (replace != ' ')
                    putchar(c);
            } else
                putchar(c);
            replace = c;
        }
        return 0;
    }