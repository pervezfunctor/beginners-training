#include <stdio.h>
#include <string.h>
int squeeze(char *string1, const char *string2) {
    int i, j, k;
    int len = strlen(string2);
    int found;
    for (i = j = 0; string1[i] != '\0'; i++) {
        found = 0;
        for (k = 0; string2[k]!= '\0'; k++) {
            if (string1[i] == string2[k]) {
                found = 1;
                break;
            }
        }
        if (!found) {
            string1[j++] = string1[i];
        }
    }
    string1[j] = '\0';
}
int main() {
    char string1[] = "ramya";
    char string2[] = "a";
    squeeze(string1, string2);
    printf("%s\n", string1);
    return 0;
}