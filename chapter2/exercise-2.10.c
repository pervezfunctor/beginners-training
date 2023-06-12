#include <stdio.h>
void toLower(char* str){
    int i=0;
    while (str[i]!='\0'){
        if(str[i]>='A' && str[i]<='Z')
        {
            str[i]+=32;
        }
        i++;
    }
}
int main(){
    char input[100];
    printf("enter a string :\n ");
    scanf("%99[^\n]",input);
    printf("original %s\n",input);
    toLower(input);
    printf("output %s\n",input);
}