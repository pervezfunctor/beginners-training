//
// Created by technoidentity on 27/6/23.
//
#include <stdio.h>

int main(){
    int c , vc=0 ,cc=0;
    while((c=getchar()) != EOF) {
        switch (c) {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
                vc++;
                break;
            default:
            if(c!= '\n')
                cc++;
                break;
        }
    }
    printf("no: of vowels = %d \n no: of consonants = %d",vc,cc);

}

//int voworconst(char s[]){
//    int i = 0 , vc=0 ,cc=0;
//    while(s[i]!=EOF)
//        switch(s[i]) {
//        case 'a':
//            vc++;
//            break;
//        case 'e':
//            vc++;
//            break;
//        case 'i':
//            vc++;
//            break;
//        case'o':
//            vc++;
//            break;
//        case 'u':
//            vc++;
//            break;
//            default:cc++;
//
//    }
//
//}