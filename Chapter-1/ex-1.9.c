#include<stdio.h>
int main(){
    int c,Last_c;
    while((c =getchar())!= EOF){
         if(Last_c == ' '&& c!= ' ') {
             putchar( ' ');
             putchar(c);
         }else if(c!=' '){
             putchar(c);
         }
         Last_c=c;
    }

    }

