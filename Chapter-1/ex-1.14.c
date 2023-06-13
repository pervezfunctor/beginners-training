#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void hist(const char *str) {
    int charFre[256] = {0};
    for (int i = 0; str[i] != '\0'; i++) {
        charFre[(unsigned char) str[i]]++;
    }
    printf("char frequencies:\n");
    for (int i = 0; i < 256; i++) {
        if (charFre[i] > 0) {
            printf("%c", i);
            for (int j = 0; j < charFre[i]; j++) {
                printf("*");
            }
            printf("\n");
        }
    }
}
int main() {
    char str[1000];
    printf("enter a string:");
    fgets(str, sizeof(str), stdin);
    if (str[strlen(str) - 1] == '\n') {
        str[strlen(str) - 1] = '\0';
    }
    hist(str);
    return 0;
}