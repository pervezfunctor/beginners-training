//#include <stdio.h>
//#define MAX_LINE 1000
//#define MIN_LINE 80
//int getLine(char line[],int max_line);
//int main(){
//    int length;
//    char line[MAX_LINE];
//    while((length= getLine(line,MAX_LINE))>0){
//        if(length>MIN_LINE){
//            printf("%s",line);
//        }
//    }
//    return 0;
//}
#include <stdio.h>

#define MAX_LINE 1000
#define MIN_LENGTH 80
int _getline(char line[], int lim);

int main(void) {
    int len;
    char line[MAX_LINE];

    while ((len = _getline(line, MAX_LINE)) > 0) {
        if (len > MIN_LENGTH)
            printf("%s", line);
    }

    return 0;
}

int _getline(char line[], int lim) {
    int i, c;

    for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
        line[i] = c;

    if (c == '\n') {
        line[i] = c;
        ++i;
    }
    line[i] = '\0';

    return i;
}