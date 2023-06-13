#include <stdio.h>
#define MAX_LENGTH 50
int main(){
    int lengths[MAX_LENGTH+1]={0};
    int c;
    int length=0;
    printf("enter input(press ctrl+D to exit):\n");
    while((c=getchar())!=EOF){
        if(c==' ' || c=='\n' || c=='\t'){
            if(length>0 && length<=MAX_LENGTH){
                lengths[length]++;
            }
            length=0;
        }else{
            length++;
        }
    }
    for(int i=1;i<=MAX_LENGTH;i++){
        printf("%2d:",i);
        for(int j=0;j < lengths[i];j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}