//
// Created by technoidentity on 27/6/23.
//
//1 ans:
 //Actually int is a type of the integer,the size of int is 4 bits.and int type has defined different integers  like
 //signed int and unsigned int,and in modern systems widely used 32bit signed integer,it provides a wide range of
 //values like  -2147483648 to -2147483648. and unsigned int range should be in the 377777777770.
 //Explaination:
 // int type is completely implementation dependent.It means that the size of int may vary across different compilers and systems.
//the format specifier of int is %d. and int  can be used for declaring variables like whole numbers either be positive
//and negative and zero.

//2 ans:
int arr[10];
int *ptr = arr;
//the type of arr is an integer with the size of 10 input values.
//*ptr is a pointer to address the location of the array and it is a pointer to the integer.it is used to access
// elements in the aray.


//3ans:

/*reverse program*/
//#include<stdio.h>
//void reverse(char s[]) {
//    int len = 0;
//    int i = 0;
//    while (s[len] != '\0') {
//        len++;
//    }
//    int first = 0;
//    int last = len - 1;
//    while (first < last) {
//        // Swap characters
//        char temp = s[first];
//        s[first] = s[last];
//        s[last] = temp;
//        first++;
//        last--;
//
//    }
//}
//    int main(){
//            printf("Enter string: ");
//            char inp[1000];
//            scanf("%[^\n]", inp);
//            int len;
//            for (len = 0; inp[len] != '\0'; len++) {
//
//            }
//            if (inp[len - 1] == '\n') {
//                inp[len - 1] = '\0';
//            }
//
//            reverse(inp);
//            printf("Reversed line: %s", inp);
//            return 0;
//
//        }
//    }


    //5 ans:
    /* copy input and output */

//#include <stdio.h>
//void copyInputToOutput() {
//    int c;
//    while ((c = getchar()) != EOF) {
//        putchar(c);
//    }
//}
//
//int main() {
//
//    char s[100];
//    printf("enter string:");
//    scanf("%s",&s);
//    copyInputToOutput();
//    printf("copy string:%s", s);
//
//}


//6ans:
/* vowels and consonants in string*/
//#include <stdio.h>
//#include <ctype.h>
//
//int countVowels(const char *str) { // vowels logic
//    int vowels = 0;
//    for (int i = 0; str[i] != '\0'; i++) {
//        char ch = tolower(str[i]);
//        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
//            vowels++;
//        }
//    }
//    return vowels;
//}
//
//int countConsonants(const char *str) {  // consonants logic
//    int consonants = 0;
//    for (int i = 0; str[i] != '\0'; i++) {
//        char ch = tolower(str[i]);
//        if (isalpha(ch) && ch != 'a' && ch != 'e' && ch != 'i' && ch != 'o' && ch != 'u') {
//            consonants++;
//        }
//    }
//    return consonants;
//}
//
//int main() {
//    char s[100];
//
//    printf("Enter a string: ");
//    scanf("%[^\n]", s);
//
//    int vowels = countVowels(s);
//    int consonants = countConsonants(s);
//
//    printf("No of vowels: %d\n", vowels);
//    printf("No of consonants: %d\n", consonants);
//
//    return 0;
//}


//4ans:

/*function implementation  cpy */
//#include <stdio.h>
//
//void cpy(int *dest, int *src, int *end) {
//    if (src < end) {
//        *dest = *src;
//        cpy(dest + 1, src + 1, end);
//    }
//}
//
//int main() {
//    int src[10];
//    int dest[10];
//    int *end = src + sizeof(src) / sizeof(src[0]);
//
//    for (int i = 0; i < sizeof(src) / sizeof(src[0]); i++) {
//        src[i] = i + 1;
//    }
//
//    cpy(dest, src, end);
//
//    printf("Elements in src array: ");
//    for (int i = 0; i < sizeof(src) / sizeof(src[0]); i++) {
//        printf("%d ", src[i]);
//    }
//    printf("\n");
//
//    printf("Elements in dest array: ");
//    for (int i = 0; i < sizeof(dest) / sizeof(dest[0]); i++) {
//        printf("%d ", dest[i]);
//    }
//    printf("\n");
//
//    return 0;
//}
//












