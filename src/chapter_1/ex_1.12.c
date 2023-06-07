//
// Created by technoidentity on 5/6/23.
//

#include <stdio.h>
#define OUT 0
#define IN 1
int main(){
    int c,state;
    state= OUT;

    while ((c=getchar())!=EOF){
        if(c==' '||c=='\t')state = IN;

        else if (c!=' ' && c!='\t'){
          if(state==IN) putchar('\n');
            state=OUT;
            putchar(c);
        }

    }
}
