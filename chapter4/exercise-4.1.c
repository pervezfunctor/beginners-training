#include <stdio.h>
#include <string.h>
int str_index(char *s,char *t){
    int s_length= strlen(s);
    int t_length= strlen(t);
    int i,j,k;
    for (i=s_length-1;i>=t_length-1;i--){
        for (j=i,k=t_length-1;k>=0 && s[j]==t[k] ; j--,k--)
            ;
        if(k==-1)
            return i-t_length+1;
    }
    return -1;
}
int main(){
    char s[100];
    char t[100];
    printf("enter string:");
    scanf("%s",&s);
    printf("enter another string:");
    scanf("%s",&t);
    int str= str_index(s,t);
    printf("the position of the rightmost occurrence :%d \n",str);
}