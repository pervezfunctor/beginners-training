#include <stdio.h>

void escape(char word[], char reverse[]);

void main(){
     char word[] = {'a','b','c','\n','\t','d','e'};
    char copy[5];
    escape(word, copy);
    printf("%s", copy);

}  

void escape(char word[], char copy[]){
    int i, j;
    
    for(i = j = 0; word[i] != '\0'; i++ ){
        switch (word[i])
        {
        case '\n':
        copy[j++] = '\\';
        copy[j++] = 'n';
            break;

        case '\t':
        copy[j++] = '\\';
        copy[j++] = 't';
        break;

        default:
            copy[j++] = word[i];
        }
        copy[j] = '\0';
    }
}
