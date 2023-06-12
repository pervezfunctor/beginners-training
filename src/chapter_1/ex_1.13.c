

//this histogram is for input of word length of upto 9

#include <stdio.h>
#define IN 1
#define OUT 0
void  horiHist(int w[]);
void vertiPrint(int w[]);

int main(){

    int c,length=0;
    int wl[10]={0,0,0,0,0,0,0,0,0,0};

    while((c=getchar()) != EOF){
        if(c != ' ' && c != '\n' && c != '\t'){
           length++;
        }else {
            ++wl[length];
            length = 0;
        }
    }
//    horiHist(wl);
    vertiPrint(wl);
}
void  horiPrint(int w[]) {
    for (int i = 1; i < 10; i++) {
        printf("%d | ", i);
        for (int j = 1; j <= w[i]; j++)
            printf("*");
        putchar('\n');
    }
}

void vertiPrint(int w[]){
    for(int i=10;i>0;i--){
        printf("%2d | ",i);

        for(int j=1;j<10;j++){
            if(i<=w[j]){
                printf("%2c",'*');
            }else
                printf("%2c",' ');

        }
        putchar('\n');
    }
    printf("     %2d%2d%2d%2d%2d%2d%2d%2d%2d %2d",1,2,3,4,5,6,7,8,9,10);

}



