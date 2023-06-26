#include <stdio.h>
#include <ctype.h>
int getfloat(float *ptr) {
    int c, sign;
    float power;
    while (isspace(c = getchar()));
    if (c == '+' || c == '-') {

        sign = (c == '-') ? -1 : 1;

        c = getchar();

    } else {

        sign = 1;

    }
    for (*ptr = 0.0; isdigit(c); c = getchar()) {

        *ptr = *ptr * 10.0 + (c - '0');

    }
    if (c == '.') {

        c = getchar();

        for (power = 1.0; isdigit(c); c = getchar()) {

            *ptr = *ptr * 10.0 + (c - '0');

            power *= 10.0;

        }

        *ptr /= power;

    }


    *ptr *= sign;


    // Handle cases where the input is not a number

    if (c != EOF) {

        ungetc(c, stdin);

        return c;

    }


    return EOF;

}
int main() {

    float num;
    printf("enter number :");

    if (getfloat(&num) == EOF) {

        printf("Invalid input or end-of-file reached.\n");

    } else {

        printf("floating-point number: : %f\n", num);

    }
    return 0;
}