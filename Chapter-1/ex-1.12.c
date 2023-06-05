#include<stdio.h>
int main(){
    char c;
    int word=0;

    while((c =getchar()) != EOF) {
        if(c == ' ' || c == '\n' || c == '\t') {
            if(word){
                putchar('\n');
            }
        }
        else {
            putchar(c);
            word=1;
        }
    }
    return 0;
}