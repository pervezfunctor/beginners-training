#include <stdio.h>
char lower(char c) {
    return (c >= 'A' && c <= 'Z') ? (c + ('a' - 'A')) : c;
}
int main() {
    char input , output ;
    printf("enter the uppercase character:\n");
    scanf("%c",&input);
    output = lower(input);
    printf("lowercase character is: %c\n", output);
    return 0;
}
