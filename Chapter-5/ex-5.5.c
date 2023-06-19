#include <stdio.h>
#include <string.h>

// Copies at most n characters of t to s
void strncpy_custom(char *s, const char *t, size_t n) {
    size_t i;
    for (i = 0; i < n && t[i] != '\0'; i++) {
        s[i] = t[i];
    }
    for (; i < n; i++) {
        s[i] = '\0';
    }
}

// Concatenates at most n characters of t to the end of s
void strncat_custom(char *s, const char *t, size_t n) {
    size_t i, j;
    for (i = 0; s[i] != '\0'; i++);
    for (j = 0; j < n && t[j] != '\0'; j++) {
        s[i + j] = t[j];
    }
    s[i + j] = '\0';
}

// Compares at most n characters of s and t
int strncmp_custom(const char *s, const char *t, size_t n) {
    size_t i;
    for (i = 0; i < n && s[i] == t[i] && s[i] != '\0'; i++);
    if (i == n) {
        return 1; // The first n characters match
    }
    return s[i] - t[i];
}

int main() {
    char s[20] ;
    char t[10] ;
    printf("enter first string:");
    scanf("%s",s);
    printf("enter second string:");
    scanf("%s", t);
    strncpy_custom(s, t, 3);
    printf("strncpy_custom: %s\n", s); // Output: Hel
    strncat_custom(s, t, 4);
    printf("strncat_custom: %s\n", s); // Output: HelWorl
    int result = strncmp_custom(s, t, 3);
    printf("strncmp_custom: %d\n", result); // Output: 0 (Equal)
    return 0;
}

