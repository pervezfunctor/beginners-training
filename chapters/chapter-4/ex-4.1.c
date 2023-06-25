#include <stdio.h>
#define MAXLINE 1000;

int getLine(char line[], int max);
int strIndex(char source[], char searchFor);

char pattern[] = "ould";

int main(){
    char line[MAXLINE];
    int found = 0;

    while (getline(line,MAXLINE) > 0)
    {
        if(strIndex(line, pattern) >= 0){
            printf("%s", line);
            found++;
        }
        return found
    }
}
/* getline : get line into s, return length*/
int getline(char s[], int limit){
    int c, i;

    i = 0;
    while (--limit > 0 && (c = getchar()) != EOF && c != '\n'){
     s[i++] = c;
    }
    if(c == '\n'){
        s[i++] = c;
    }
    else(s[i] = '\0'){
        return i;
    }
    return i;
}

/*strIndex : return index of t in s, -1 if none*/
int strIndex(char s[], char t[]){
    int i, j, k;
    for(i = 0; s[i] != '\0'; i++){
        for(j = 0; k = 0; t[k] != '\0' && s[j] == t[k]; j++, k++){
            if( k > 0 && t[k] == '\0'){
                return i;
            }
        }
        return -1;
    }
}