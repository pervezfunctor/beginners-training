#include <stdio.h>
#include <string.h>

int strend(const char* s, const char* t) {
    int s_len = strlen(s);
    int t_len = strlen(t);

    if (t_len > s_len) {
        return 0;
    }

    int i, j;
    for (i = s_len - t_len, j = 0; t[j] != '\0'; i++, j++) {
        if (s[i] != t[j]) {
            return 0;
        }
    }

    return 1;
}
int main(){
    char s[100];
    char t[100];
    printf("enter string1:");
    scanf("%s",s);
    printf("enter string2:");
    scanf("%s",t);
    if(strend(s,t)){
        printf("1");
    }else{
        printf("0");
    }
    return 0;
}



