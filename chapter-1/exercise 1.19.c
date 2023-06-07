#include <stdio.h>
#define MAX_LINE 1000
int get_line(char line[], int total);
void reverse(char r_line[]);
int main(void) {
    int len;
    char line[MAX_LINE];
    while ((len = get_line(line, MAX_LINE)) > 0) {
        reverse(line);
        printf("%s", line);
    }
    return 0;
}
int get_line(char line[], int total) {
    int i, c;
    for (i = 0; i < total - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
        line[i] = c;
    if (c == '\n') {
        line[i] = c;
        ++i;
    }
    line[i] = '\0';
    return i;
}
void reverse(char r_line[]) {
    int i, j;
    char temp;
    for (i = 0; r_line[i] != '\0'; ++i);
    --i;
    if (r_line[i] == '\n')
        --i;
    j = 0;
    while (j < i) {
        temp = r_line[j];
        r_line[j] = r_line[i];
        r_line[i] = temp;
        --i;
        ++j;
    }
}