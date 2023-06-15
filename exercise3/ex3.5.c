#include <stdio.h>

void itob(int n, char *s, int b) {
    int i = 0;
    int hexadecimal;

    do {
        hexadecimal = n % b;

        if (hexadecimal < 10)
            s[i] = hexadecimal+ '0';
        else
            s[i] = hexadecimal- 10 + 'A';

        n /= b;
        i++;
    } while (n != 0);

    s[i] = '\0';

    // Reverse the string
    int length = i;
    for (int j = 0; j < length / 2; j++) {
        char temp = s[j];
        s[j] = s[length - j - 1];
        s[length - j - 1] = temp;
    }
}

     int main(){
         int n;
         printf("enter the number:");
         scanf("%d",&n);
         char str[100];
         int base=16;
         itob(n,str,base);
         printf("%s\n",str);
         return 0;
     }
