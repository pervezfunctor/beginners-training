#include<stdio.h>
int main() {
    char c;
    printf("Enter text (press Ctrl + D to exit):\n");
    while ((c=getchar()) != EOF) {
        if (c == '\t') {
            printf("\\t");
        }
         else if (c == '\b') {
            printf("\\b");
        }
          else if (c == '\\') {
            printf("\\\\");
        }
        else {
            putchar(c);
        }
    }
    return 0;
}
