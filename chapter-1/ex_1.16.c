#include<stdio.h>
#define MAXLINE 10
int getline1(char line[] , int maxline );
void copy (char to[],char from[]);
int main(){
    int len,max;
    char line[MAXLINE],longest[MAXLINE];
    max=0;
    while((len=getline1(line,MAXLINE))>0)
        if(len>max) {
            max = len;
            copy(longest, line);
        }
    if(max>0)
        printf("%d , %s",max,longest);
    return 0;


}

int getline1(char s[],int lim){
    int c,i,j=0;
    for(i=0; (c=getchar())!=EOF && c!='\n';++i) {
       if(i<lim-2) {
           s[j] = c;
           ++j;
       }
    }
    if(c=='\n')
    {
        s[j]=c;
        ++j;
        ++i;
    }
    s[j]='\0';
    return i;
}



void copy(char to[],char from[]){
    int i=0;
    while((to[i]=from[i])!='\0')
        ++i;

}
