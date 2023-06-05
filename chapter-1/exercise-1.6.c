//
// Created by technoidentity on 3/6/23.
//
//getchar()!=EOF is 0 or 1

#include <stdio.h>
int main(){
    int c;
    while((c=getchar())!=EOF)
        printf("%d \n",c);
    printf("%d - at EOF\n",c);

        //putchar(c);
}