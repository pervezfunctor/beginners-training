#include <stdio.h>
void squeeze(char s1[], char s2[]);
void squeeze(char s1[], char s2[]){
    int  i, j, k;
    for(i = j = 0; s1[i] != '\0'; i++){
        for (k = 0; s2[k] != '\0' && s2[k] != s1[i]; k++);
        if(s2[k] =='\0'){
            s1[j++] = s1[i];

        }
        s1[j] = '\0';
    }

    //printf("%s", s1);
}








int main(){
    char s1 [100];
    char s2[10];
    printf("enter string s1:");
    scanf("%s",&s1);
    printf("enter string s2:");
    scanf("%s",&s2);
    squeeze(s1, s2);
    //printf("Before squeeze: %s\n", s1);

    printf("After squeeze: %s\n", s1);
    return 0;
}