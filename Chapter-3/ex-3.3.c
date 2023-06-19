#include<stdio.h>
void expand(char s1[] , char s2[]) {
    int i, j = 0;
    char c;
    while (s1[i] != '\0') {
        if (s1[i] == '-' && i > 0 && s1[i + 1] != '\0') {
            char first = s1[i - 1];
            char last = s2[i + 1];
            if ((first >= 'a' && first <= 'z' && last >= 'a' && last <= 'z') ||
                (first >= 'A' && first <= 'Z' && last >= 'A' && last <= 'Z') ||
                (first >= '0' && first <= '9' && last >= '0' && last <= '9')) {
                if (first <= last) {
                    for (c = first + 1; c <= last; c++) {
                        s2[j] = c;
                        j++;
                    }
                }
                i++;
            }}
        else if (s1[i] == '-' && s1[i + 1] != '\0'){
            s2[j] = '-';
        j++;}
    else{
        s2[j] = s1[i];
        j++;
    }
    i++;}
    s2[j] = '\0';
}
int main(){
    char s1[100];
    printf("enter the string to be expanded :");
    scanf("%s",s1);
    char s2[100];
    expand(s1,s2);
    printf("the expanded string is:%s",s2);
    return 0;
}


