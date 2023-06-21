#include<stdio.h>

void squeeze(char s1[],char s2[]);

int main(){
     char s1[5] = {'z','a','i','d'};
     char s2[5] = {'a','b','b','y'};

     squeeze(s1,s2);
     printf("%s",s1);

     return 0;
}


void squeeze(char s1[], char s2[]) {
    int i, k,j;
    for (i = k = 0; s1[i] != '\0'; i++) {
        for (j = 0; s2[j] != '\0' && s2[j] != s1[i]; j++);
        if (s2[j] == '\0') {
            s1[k++] = s1[i];
        }
    }
        s1[k]='\0';
}