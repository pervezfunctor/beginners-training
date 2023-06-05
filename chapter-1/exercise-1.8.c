//
// Created by technoidentity on 3/6/23.
//
//program to count blanks,tabs, and newlines

#include<stdio.h>
int main(){
    int blanks=0;
    int tabs=0;
    int newlines=0;
    char c;

    printf("Enter text(press Cntrl + D to exit):\n");

    while((c=getchar())!=EOF){

        if(c==' '){
            blanks++;
        }
        else if(c=='\t'){
            tabs++;
        } else if(c=='\n'){
            newlines++;
        }
    }
    printf("blanks:%d\n",blanks);
    printf("tabs:%d\n",tabs);
    printf("newlines:%d\n",newlines);
}