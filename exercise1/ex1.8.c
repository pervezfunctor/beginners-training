#include<stdio.h>
int main()
{
    char ch;
    int blanks = 0, tabs = 0, newlines = 0;

    printf("Enter text (press Enter without any text to exit):");
    while ((ch = getchar()) != '\n') {

        if (ch == ' ')

            blanks++;

        else if (ch == '\t')

            tabs++;

        else if (ch == '\n')

            newlines++;

    }
    printf("Number of blanks: %d\n", blanks);

    printf("Number of tabs: %d\n", tabs);

    printf("Number of newlines: %d\n", newlines);


    return 0;
}