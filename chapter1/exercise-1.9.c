#include <stdio.h>
int main() {
    int c,prev_blank = 0;
    printf("enter some text:");
    while ((c = getchar()) != EOF) {
        if (c == ' ') {
            if (!prev_blank) {
                putchar(c);
                prev_blank = 1;
            }
        }
            else {
                putchar(c);
                prev_blank = 0;
            }
    }
    return 0;
}