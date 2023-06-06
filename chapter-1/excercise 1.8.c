#include <stdio.h>
int main(){
    int ch, nb=0,nt=0,nl=0;
    while((ch =getchar()) != EOF){
        if(ch == ' ')
            nb++;
        else if(ch == '\t')
            nt++;
        else if(ch == '\n')
            nl++;
    }
    printf("no of blanks %d \n",nb);
    printf("no of tabs %d \n ",nt);
    printf("no of lines %d \n",nl);
    return 0;
}