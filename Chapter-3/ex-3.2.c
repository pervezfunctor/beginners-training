#include <stdio.h>
void escape(char s[], const char t[]) {
    int i, j;
    for(i = 0, j = 0; t[i] != '\0';i++, j++)
    {
        if(t[i] == '\\'){
            switch(t[++i]){
                case 'n':
                    s[j] = '\n';
                    break;
                case 't':
                    s[j] = '\t';
                    break;
                default:
                    s[j++] = '\\';
                    s[j] = t[i];
                    break;
            }
        }else{
            s[j] = t[i];
        }
    }s[j]= '\0';
}
int main(){
    const char input[100];
    printf("enter the string:");
    scanf("%s",input);
    char output[100];
    escape(output,input);
    printf("visible escape sequences :%s\n",output);
    return 0;
}