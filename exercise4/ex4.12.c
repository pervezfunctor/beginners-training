#include <stdlib.h>
#include<stdio.h>
void itoa(int n, char s[]) {
  static   int i;

    if (n / 10)
        itoa(n / 10, s);
    else {
        i = 0;
        if (n < 0)
            s[i++] = '-';
    }

    s[i++] = abs(n) % 10 + '0';

    s[i] = '\0';

}
int main(){
   int num;
   char str[10];
   printf("enter integer:");
   scanf("%d",&num);
    itoa(num, str);

    printf(" converted to string :%s", str);

    return 0;



}