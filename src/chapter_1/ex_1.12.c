//
// Created by technoidentity on 5/6/23.
//

#include <stdio.h>
int main(){
    int c;
    while ((c=getchar())!=EOF){
        if(c!=' ')putchar(c);
        else putchar('\n');
    }
}
