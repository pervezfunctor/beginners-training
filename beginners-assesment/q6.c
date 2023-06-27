#include<stdio.h>
#include<ctype.h>
void main(){
    int c ,vow=0,cons=0,other=0;
    while((c=getchar())!=EOF){
        if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u')++vow;
        else if(isdigit(c)|| isspace(c))++other;
        else ++cons;
    }
    printf("vow=%d,other=%d,cons=%d",vow,other,cons);
}
