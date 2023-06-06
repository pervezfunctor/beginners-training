#include <stdio.h>
#include <string.h>

#define MAXLINE 1000
#define MIN_LENGTH 80

int main() {
    char line[MAXLINE];

    printf("Enter lines of text (Ctrl + D to exit):\n");

    while (fgets(line, sizeof(line), stdin) != NULL) {
        size_t len = strlen(line);
        if (len > MIN_LENGTH) {
            printf("%s", line);
        }
    }

    return 0;
}
