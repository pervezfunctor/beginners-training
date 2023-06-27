//
// Created by technoidentity on 27/6/23.
//
//1
/*the size of int in C
the size of the int in c is 4 bytes
#include <stdio.h>
int main(){
    printf("the size of int:%d",sizeof (int));
}
*/

//2
/*type if arr and ptr in the following code snippet?
int arr[10];
the type of arr is an array of int, where the arr[10] holds 10 integer values in contiguous memory location
int *ptr = arr;
the type of ptr is pointer to int ,it holds the address of the first element, ptr point to the array and access its elements
 */

//3
/*#include <stdio.h>
void reverse(int s[],int len){
    int start=0;
    int end = len-1;
    while(start<end){
        int temp=s[start];
        s[start]=s[end];
        s[end]=temp;
        start ++;
        end --;
    }

}
int main(){
    int s[]={1,2,3,4,5};
    int len=sizeof (s)/sizeof(s[0]);
    reverse(s,len);
    printf("reversed array:");
    for(int i=0;i<len;i++){
        printf("%d ",s[i]);
    }
    return 0;
}*/

//4
/*function which copies src array to dest array.
#include <stdio.h>
void cpy(int *dest, int *src, int *end) {
    while (src < end) {
        *dest = *src;
        dest++;
        src++;
    }
}
int main() {
    int src[]={1,2,3,4};
    int size=sizeof(src) / sizeof(src[0]);
    int dest[size];
    int *end = src + sizeof(src) / sizeof(src[0]);
    cpy(dest, src, end);
    printf("Copied array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", dest[i]);
    }
    printf("\n");

    return 0;
}
*/

//5
/*function to copy standard input to standard output
#include <stdio.h>

void stdintostdout() {
    char input[100];
    fgets(input, sizeof(input), stdin);
    printf("copied standard input as output: %s", input);
}

int main() {
    printf("Enter standard input: ");
    stdintostdout();
    return 0;
}
 */

//6
/*program to count the number of vowels and consonants in a given string.
#include <stdio.h>
#include <ctype.h>
int main() {
    char str[100];
    int vowels = 0, consonants = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0'; i++) {
        char ch = toupper(str[i]);

        if (ch >= 'A' && ch <= 'Z') {
            if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
                vowels++;
            } else {
                consonants++;
            }
        }
    }

    printf("Number of vowels: %d\n", vowels);
    printf("Number of consonants: %d\n", consonants);

    return 0;
}
*/

//7
/*
#include <stdio.h>
double expression(float x, int n) {
    float result = 1.0;
    float val = 1.0;
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
    scanf("%f", &x);
    printf("Enter the value of n: ");
    scanf("%d", &n);
    float result = expression(x, n);
    printf("Result: %.2f\n", result);
    return 0;
}
*/