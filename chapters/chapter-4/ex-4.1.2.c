#include <stdio.h>
#include <string.h>
#define MAXLINE 1000

int gline(char line[], int max);
int strindex(char source[],char searchfor[]);
void reverse(char line[],char rev[]);

char pattern[] = "ould";

int main(){
    char line[MAXLINE];
    char rev[MAXLINE];
    // int found = 0;

    while (gline(line, MAXLINE) > 0)
    {
        printf("%d",strindex(line, pattern));
        reverse(line,rev);
        printf("%s", rev);
        // if() >= 0){
            // printf("%s", line);
            // found++;
        // }
    }
    return 0;
}

void reverse(char line[], char rev[]){
    int length = strlen(line);
    for(int i = length; i >= 0; i--){
        rev[i] = line[i];
    }
}

int gline(char line[], int max){
    int c, i;
    i = 0;

    while(--max > 0 && (c = getchar()) != EOF && c != '\n'){
        line[i++] = c;
    }
    if(c == '\n'){
        line[i++] = c;
    }

    line[i] = '\0';
    return i;

}


int strindex(char line[], char pattern[]){
    int i, j, k;
    for(i = 0; line[i] != '\0'; i++){
        for(j = i, k = 0; pattern[k] != '\0' && line[j] == pattern[k]; j++, k++);
            if(k > 0 && pattern[k] == '\0'){
                return i ;
            }
    }
    return -1;
}