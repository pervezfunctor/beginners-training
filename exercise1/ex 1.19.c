/*reverse program*/
#include<stdio.h>
void reverse(char s[]) {
    int len = 0;
    int i = 0;
    while (s[len] != '\0') {
        len++;
    }
    int first = 0;
    int last = len - 1;
    while (first < last) {
        // Swap characters
        char temp = s[first];
        s[first] = s[last];
        s[last] = temp;
        first++;
        last--;

    }

}/*main function*/
int main() {
    printf("Enter text: ");
    char inp[1000];
    scanf("%[^\n]", inp);
    int len;
    for (len = 0; inp[len] != '\0'; len++) {

    }
    if (inp[len - 1] == '\n') {
        inp[len - 1] = '\0';
    }

    reverse(inp);
    printf("Reversed line: %s", inp);
    return 0;

}