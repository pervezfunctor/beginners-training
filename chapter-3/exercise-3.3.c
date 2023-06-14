//
// Created by technoidentity on 14/6/23.
//
//program that expands shorthand notations into the equivalent complete list
#include <stdio.h>
void expand(const char *s1,char *s2){
    char c,start,end;
    int i,j=0;
    while((c=s1[i++])!='\0'){
        if(s1[i]=='-'&& s1[i+1]>=c){
            start=c;
            end=s1[i+1];
            if(start=='-'||end=='-'){
                s2[j++]='-';
                i++;
                continue;
            }
            if(start>='a'&& end>='a'){
                while(start<=end){
                    s2[j++]=start++;
                }
            }else if(start >='A'&& end>='A'){
                while(start<=end){
                    s2[j++]=start++;
                }
            }else if(start>='0' && end>='0'){
                while(start<=end){
                    s2[j++]=start++;
                }
            }
            i+=2;
        }else{
            s2[j++]=c;
        }
    }
    s2[j]='\0';
}
int main(){
    const char s1[100];
    printf("enter the string to be expanded:");
    scanf("%s",s1);
    char s2[100];
    expand(s1,s2);
    printf("expanded string:%s\n",s2);
    return 0;
}