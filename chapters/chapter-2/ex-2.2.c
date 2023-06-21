#include <stdio.h>

int main(){
    int limit, c, i, loop;
    limit = 8;
    i = 0;
    loop = 1;
    char s[limit];

    while (loop)
    {
        if(i >= limit){
            loop = 0;
        }
        else if((c =getchar()) == '\n'){
            loop = 0;
        }
        else if(c == EOF){
            loop = 0;
        }
        else {
            s[limit] = c;
            ++i;
        }
        printf("%s",s);
    }
    return 0;
     
}