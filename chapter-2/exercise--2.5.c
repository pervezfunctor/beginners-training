#include <stdio.h>
int any(char s1[],char s2[])
{
    int i,j;
    for(i=0;s1[i]!='\0';i++)
    {
        for(j=0;s2[j]!='\0';j++)
        {
            if(s1[i]==s2[j])
            {
                return i;
            }
        }
    }
    return -1;
}
int main() {
    char s1[] = "pavani";
    char s2[] = "v";
    int location = any(s1, s2);
    if (location != -1) {
        printf("character location is %d\n", location);
    } else {
        printf("element is not found");
    }
}