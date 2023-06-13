#include <stdio.h>
int squeeze(char s1[], char s2[]) {
    int i, j, k;
    int found;
    for (i = j = 0; s1[i] != '\0'; i++) {
        found= 0;
        for (k = 0; s2[k] != '\0'; k++) {
            if (s1[i] == s2[k]) {
                found= 1; // Found a match, set match flag to 1
                break;
            }
        }
        if (!found) {
            s1[j++] = s1[i];
        }
    }
    s1[j] = '\0';
}
int main() {
        char s1[20];
        char s2[20];
        printf("Enter the first string: ");
        scanf("%s", &s1);
        printf("Enter the second string: ");
        scanf("%s", &s2);
        squeeze(s1, s2);
        printf("Result: %s\n", s1);
        return 0;
    }