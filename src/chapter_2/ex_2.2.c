//
// Created by technoidentity on 12/6/23.
//
#include <stdio.h>
#define MAXVALUE 100
int main(){
    int i,lim=MAXVALUE;
    int c;
    char s[MAXVALUE];
    for(i=0;c!=EOF ; ++i) {
        if(i<lim-1){
            if((c=getchar())!='\n')
                    s[i]=c;
        }
    }
    printf("%s",s);
}