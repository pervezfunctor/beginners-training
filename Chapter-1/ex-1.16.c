#include<stdio.h>
#define MAX_LINE_LENGTH 1000
int main(){
    int currLine_len=0;
    int maxLine_len=0;
    char currLine[MAX_LINE_LENGTH];
    char longestLine[MAX_LINE_LENGTH];
    printf("enter lines of text(press ctrl+D to exit):\n");
    while(1){
        int c = getchar();
        if( c == '\n' || c == EOF) {
            if (currLine_len > maxLine_len) {
                maxLine_len = currLine_len;
                for (int i = 0; i < currLine_len; i++) {
                    longestLine[i] = currLine[i];
                }
            }
            printf("length of longest line:%d\n", maxLine_len);
            printf("longest line:%s\n", longestLine);
            currLine_len = 0;
            maxLine_len = 0;
            if (c == EOF) {
                break;
            }
        }
        else {
            currLine[currLine_len] = c;
            currLine_len++;

            if (currLine_len >= MAX_LINE_LENGTH - 1) {
                currLine_len = MAX_LINE_LENGTH - 1;
            }
        }
    }
    return 0;
}