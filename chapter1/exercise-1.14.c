#include <stdio.h>
#include <ctype.h>
#define MAX_CHAR 150
int main(){
    int frequency[MAX_CHAR]={0};
    char c;
    while ((c=getchar())!='\n'){
        if(isalpha(c)){
            frequency[tolower(c)]++;
        }
    }
    for(int i=0;i<MAX_CHAR;i++){
        if(frequency[i]>0){
            printf("%c:",i);
            for(int j=0;j< frequency[i];j++){
                printf("@");
            }
            printf("\n");
        }
    }
    return 0;
}