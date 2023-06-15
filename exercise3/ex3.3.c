#include <stdio.h>

void expand(const char *s1, char *s2) {
    int i, j;
    char c;

    i = j = 0;

    // Handle leading '-' if present
    if (s1[i] == '-') {
        s2[j++] = '-';
        i++;
    }

    // Expand shorthand notations
    while (s1[i] != '\0') {
        if (s1[i + 1] == '-' && s1[i + 2] >= s1[i]) {
            for (c = s1[i]; c <= s1[i + 2]; c++)
                s2[j++] = c;
            i += 3;
        }
            // Check for trailing '-' if present
        else if (s1[i] == '-' && s1[i + 1] != '\0') {
            s2[j++] = '-';
            i++;
        }
            // Copy other characters as is
        else {
            s2[j++] = s1[i++];
        }
    }

    // Terminate the expanded string
    s2[j] = '\0';
}

int main() {
    char s1[] = "a-z0-9";
    char s2[100];

    expand(s1, s2);

    printf("Expanded string: %s\n", s2);

    return 0;
}
