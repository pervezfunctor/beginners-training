#include <stdio.h>
#define MAX_LINE 1000
int get_line(char arr[],int total);
void copy(char to[],char from[]);
int main(){
    int length,max;
    char line[MAX_LINE];
    char longest[MAX_LINE];
    max=0;
    while((length= get_line(line,MAX_LINE))>0){
        if(length>max){
            max=length;
            copy(longest,line);
        }
    }
    if(max>0)
    {
        printf("length=%i,string=%s",max,longest);
    }
    return 0;
}
int get_line(char arr[],int total){
    int c,i;
    for(i=0;i<total-1 && (c=getchar())!=EOF && c!='\n';++i){
        arr[i]=c;
    }
    if(c=='\n')
    {
        arr[i]=c;
        ++i;
    }
    else{
        while((c=getchar()!=EOF) && c!='\n')
        {
           ++i;
        }
        if(c=='\n'){
            arr[i]=c;
            ++i;
        }
    }
    arr[i]='\0';
    return i;
}
void copy(char to[],char from[]){
    int i;
    i=0;
    while ((to[i]=from[i])!='\0'){
        ++i;
    }
}