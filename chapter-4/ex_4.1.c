//Write the function strindex(s,t) which returns the position of the rightmost
//        occurrence of t in s, or -1 if there is none.
#include<stdio.h>

int gline(char s[]);
int strindex(char s[],char t[]);
char pattern[100]="ould";

int main(){
    char s[100];
    while(gline(s)>1){
       printf("%d \n", strindex(s,pattern));
    }
    return 0;
}

int gline(char s[]){
    int c,i=0;
 while((c=getchar())!=EOF &&c!='\n'){
     s[i++]=c;
 }
    if(c=='\n'){
        s[i++]=c;
    }
 s[i]='\0';
 return i;

}
int strindex(char s[],char t[]){
    int j,k,l=0,m=0;

    while(s[l]!='\n')l++;
    while(t[m]!='\0')m++;

    for(int i=l-1; i>=0 ;i--){
        for( j=i,k=m-1 ; k>=0 && s[j]==t[k] ; j--,k--);
        if(k==-1){
            return i-m+1;
        }
    }
    return -1;
}