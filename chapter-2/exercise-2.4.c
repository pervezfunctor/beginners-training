#include <stdio.h>
#include <string.h>
int squeeze(char *s1,char *s2) {
    int found;
//    int len=strlen(s2);
    int k;
    for (int i=k = 0; s1[i] != '\0'; i++) {
        found = 0;
        for (int j = 0; s2[j]!='\0'; j++) {
            if (s1[i] == s2[j]) {
                found = 1;
                break;
            }
        }
        if (!found) {
            s1[k++] = s1[i];
        }
    }
    s1[k]='\0';
}
int  main()
{
    char s1[]="pavani";
    char s2[]="v";
    squeeze(s1,s2);

        printf("%s\n",s1);
//        printf("remaining string is %c\n",s1[squeeze1]);
return 0;

}