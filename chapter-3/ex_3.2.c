#include<stdio.h>
int escape(char t[],char s[]);
int main(){
    char t[100]={'z','a','i','\t','d',},s[100];
escape(t,s);
printf("%s",s);
}
int escape(char t[],char s[]){
    int i=0,j=0;
    while(t[i]!='\0') {
        switch (t[i]) {
            case  '\n':{
                s[j++]='\\';
                s[j++]='n';
                break;}
            case '\t':{
                s[j++]='\\';
                s[j++]='t';
                break;
            }
            default:s[j++]=t[i];break;
        }
        ++i;
    }

}
