1 . What is the size of int in C? Explain.
    The size of int is based on the compiler, if the compiler is 16 bits then the size of int is 2 bytes.
    and if the compiler is 32 bits wide then the size of int is 4 bytes.

2. What is the type if arr and ptr in the following code snippet?
     int arr[10];
     int *ptr = arr;

     int arr[10] => it declares an array of integers with a size of 10 .Each elemnet will have the type 'int'.
             int *ptr =arr; => it declares a pointer to an integer named ptr and initializes it with the address of the first element of the array 'arr'.
               The pointer 'ptr' assigned the address of the first elememt of 'arr'.
3.Write a function to reverse an array of ints. You shouldn't use any additional memory. Function should return void.
```c
#include <stdio.h>
void reverseArray(int arr[], int size) {
    int start = 0;
    int end = size - 1;

    while (start < end) {
// Swap elements
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}
int main() {
    int myArray[] = {9,8,6,5,3};
    int size = sizeof(myArray) / sizeof(myArray[0]);

    printf("Original array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", myArray[i]);
    }

    reverseArray(myArray, size);

    printf("\nReversed array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", myArray[i]);
    }

    return 0;
}
```
4. Write the following function which copies src array to dest array. You can assume that dest array has enough space to hold src array. end is the pointer to the one element beyond the last element of src array.
void cpy(int *dest, int *src, int *end);
```c
#include <stdio.h>
void reverse(int* arr, int size) {
    int i = 0;
    int j = size - 1;
    while (i < j) {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }
}
void copy(int* dest, int* src, int* end) {
    while (src < end) {
        *dest = *src;
        dest++;
        src++;
    }
}
int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    printf("Array of elements: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    int src[] = {10,11,12,12,1,13};
    int dest[5];
    int* end = src + sizeof(src) / sizeof(src[0]);
    copy(dest, src, end);
    printf("Copied array: ");
    for (int i = 0; i < sizeof(dest) / sizeof(dest[0]); i++) {
        printf("%d ", dest[i]);
    }
    printf("\n");
    return 0;
}
```

5. Write a function to copy standard input to standard output. You can assume that the input is less than 100 characters.
```c
#include <stdio.h>
void copy() {
    char input[100];
//    fgets(input, sizeof(input), stdin);
    scanf("%s \n",&input);
    printf("Copied input is : %s", input);
}
int main() {
    copy();
    return 0;
}

```

6. Write a C program to count the number of vowels and consonants in a given string.
```c
#include<stdio.h>
#include<string.h>
#include <ctype.h>
int main()
{
    int i ;
    int vowels_count=0,consonants_count=0;
    char str[100];
    printf("enter the string :");
    scanf("%s\n",&str);
    for(i = 0; i < strlen(str); i++){
        str[i] = tolower(str[i]);
            if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u') {
                vowels_count++;
            }
            else if(str[i] >= 'a' && str[i] <= 'z'){
                consonants_count++;
            }
        }
    printf("number of vowels : %d\n", vowels_count);
    printf("number of consonants : %d\n ",consonants_count);
    return 0;
}
```


7. Write a function to compute in a single iteration(n steps)

```c
#include <stdio.h>
double numberSeries(int n, double x) {
    double result = 1.0;
    double term = 1.0;

    for (int i = 1; i <= n; i++) {
        term *= x / i;
        result += term;
    }

    return result;
}
int main() {
    int n;
    double x;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    printf("Enter the value of x: ");
    scanf("%lf", &x);
    double sum = numberSeries(n, x);
    printf("Sum of the series: %.3f\n", sum);
    return 0;
}
```