/* 1A:   The size of int in c is 4 bytes which is equivalent to 32bits .
     Since int in an integer type variable. So, the sizeof(int) simply implies the value of size of an integer.
     Whether it is a 32-bit Machine or 64-bit machine, sizeof(int) will always return a value 4 as the size of an integer.*/


2A:   int arr[10];
      int *ptr = arr;
      => The integer is a datatype of array_name arr holding the size of 10 integer values.
        The array is points to pointer of an integer variable.
        The type of arr is an array of 10 integers (int[10]), and the type of ptr is a pointer to an integer (int*).

 3A:   ...c
       #include <stdio.h>
       #include <string.h>
       void reverse(char *s, int start, int end) {
       if (start >= end)
            return;
        char temp = s[start];
        s[start] = s[end];
        s[end] = temp;
        reverse(s, start + 1, end - 1);
        }
        int main()
      {
        char str[100];
        int length = strlen(str);
        printf("enter the string:");
        scanf("%s",&str);
        reverse(str, 0, strlen(str) - 1);
        printf("After reverse: %s\n", str);
        return 0;
      }...


4A:     ...c#include <stdio.h>
        #include <string.h>
        void cpy(int *dest, int *src, int *end) {
           while (src != end) {
           *dest = *src;
           *dest++;
           *src++;
    }
}
          int main()
       {
        int src[] = {10, 20, 30};
        int dest[3];
        int *srcPtr = src;
        int *destPtr = dest;
        int *endPtr = src + sizeof(src) / sizeof(int);
        cpy(destPtr, srcPtr, endPtr);
        for (int i = 0; i < sizeof(dest) / sizeof(int); i++)
        {
        printf("%d ", dest[i]);
    }
  }...


5A:      ...c
         #include <stdio.h>
         void copyInpToOut()
         {
         char input[101]; //input is less than 100 characters
         printf("Enter input string:");
         fgets(input, sizeof(input), stdin);
         printf("The copied output string is:");
         fputs(input, stdout);
         }
           int main()
           {
           copyInpToOut();
           return 0;
           }...


6A:     ...c
        #include <stdio.h
        #include <ctype.h>
        int main()
        {
        char string[100];
        int vow = 0, cons = 0;
        printf("Enter a string: ");
        scanf("%s",string);
        for (int i = 0; string[i] != '\0'; i++) {
        char ch = tolower(string[i]);
        if (ch >= 'a' && ch <= 'z') {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                vow++;
            } else {
                cons++;
            }
        }
    }
    printf("Number of vowels: %d\n", vow);
    printf("Number of consonants: %d\n", cons);
    return 0;

}...

7A:     ...c
       #include <stdio.h>
        double iteration(float x, int n) {
        double result = 1.0;
        double val = 1.0;
        for (int i = 1; i <= n; i++) {
        val *= (x / i);
        result += val;
        }
          return result;
          }
          int main() {
           float x;
           int n;
          printf("Enter the value of x: ");
          scanf("%lf", &x);
          printf("Enter the value of n: ");
          scanf("%d", &n);
          float result = iteration(x, n);
          printf("Result: %.2f\n", result);
          return 0;
    }...


