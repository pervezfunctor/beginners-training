#include<stdio.h>
int any(char s1[], char s2[]) {
    int i, j;
    for (i = 0; s1[i] != '\0'; i++) {
        for (j = 0; s2[j] != '\0'; j++) {
            if (s1[i] == s2[j])
                return i;
        }
    }

    return 0;
}
 int main(){
    const char *s1 = "hello , world";
    const char *s2 = "aeiou";
    int res = any(s1,s2);
            if(res != -1){
                printf("character not found at pos:%d\n",res);

            }
            else{
                printf("no character found\n");
            }
}