#include <stdio.h>

void strncpy_copy(char *s, const char *t, size_t n) {
    size_t i;
    for (i = 0; i < n && t[i] != '\0'; i++) {
        s[i] = t[i];
    }
    for (; i < n; i++) {
        s[i] = '\0';
    }
}

char* strncat_concat(char* s, const char* t, size_t n) {
    char* res = s;

    while (*s != '\0')
        s++;

    while ((*s = *t) != '\0'){
        s++;
        t++;
    }
    return res;
}


int strncmp_compare(const char* s, const char* t, size_t n) {
    for (size_t i = 0; i < n && (*s == *t); i++) {
        if (*s == '\0')
            return 0;

        s++;
        t++;
    }

    if (n == 0)
        return 0;

    return (*s - *t);
}

int main(){
    char s[100];
    char t[50];
    printf("enter string1:");
    scanf("%s",s);
    printf("enter string2:");
    scanf("%s",t);
    strncpy_copy(s,t,2);
    printf("string n characters copied: %s\n", s);
   strncat_concat(s,t,3);
    printf("string n characters concat :%s\n",s);
    strncmp_compare(s,t,3);
    printf("string n characters compared:%s\n");


}