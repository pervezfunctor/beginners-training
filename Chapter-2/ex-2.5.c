#include<stdio.h>
int any( char *s1,  char *s2) {
    for (int i = 0; s1[i]!= '\0'; i++) {
        for (int j = 0; s2[j] != '\0'; j++) {
            if (s1[i] == s2[j]) {
                return i;
            }
        }
    }
    return -1;
}
int main(){
     char *s1 ="welcome";
     char *s2 = "l";
     int loc = any(s1, s2);
    if (loc != -1) {
        printf("First occurrence found at location: %d\n", loc);
        printf("Character: %c\n", s1[loc]);
    } else {
        printf("No characters from s2 found in s1.\n");
    }

}
