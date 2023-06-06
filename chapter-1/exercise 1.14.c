#include <stdio.h>
#include <ctype.h>
#define MAX_CHARACTER 160
int main() {
    char c;
    int frequency[MAX_CHARACTER] = {0};
    while ((c = getchar()) != '\n') {
        if (isalpha(c)) {
            frequency[tolower(c)]++;
        }
    }
    for (int i = 0; i < MAX_CHARACTER; i++) {
        if (frequency[i] > 0) {
            printf("%c:", i);

        for (int j = 0; j < frequency[i]; j++) {
            printf("#");
        }
        printf("\n");
    }
}
    return 0;
}