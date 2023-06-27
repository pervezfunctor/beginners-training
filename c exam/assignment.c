1 )What is the size of int in C? Explain.

>the size of int in C is compiler-dependent and machine-dependent i.e size of int can vary depending on the compiler and the machine.
The size of int is 4 bytes on 32-bit machines and 8 bytes on 64-bit machines and 2 bytes on 8-bit machines.
To determine the size of int,we can use the sizeof operator

```c
#include <stdio.h>
int main() {
    int x = 1;
    printf("int size %ld \n", sizeof(x));
    return 0;
}
```

2)What is the type if arr and ptr in the following code snippet?
    int arr[10];
In the above,Each element in the array is of type int.
the variable arr is an array of integers with a size of 10.
It can hold 10 integers in contiguous memory locations.
    int *ptr = arr;
The variable ptr is a pointer to an integer (int*).
It is initialized with the address of the first element of the arr array.
arrays points to their first element when assigned to a pointer.


3)
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
int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    printf("given array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    reverse(arr, size);
    printf("Reversed array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
```
4)
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
    printf("given array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    int src[] = {6, 7, 8, 9, 10};
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

5)
```c
#include <stdio.h>
void copy() {
    char input[100];
    scanf("%s \n",&input);
    printf("Copied input is : %s", input);
}
int main() {
    copy();
    return 0;
}
```
6)
```c
#include <stdio.h>
#include <ctype.h>
void count(const char* str, int* v, int* c) {
    *v = 0;
    *c = 0;
    while (*str) {
        char charecter = tolower(*str);
        if (isalpha(charecter)) {
            if (charecter == 'a' || charecter == 'e' || charecter== 'i' || charecter == 'o' || charecter == 'u')
                (*v)++;
            else
                (*c)++;
        }
        str++;
    }
}
int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s \n",str);
    int v, c;
    count(str, &v, &c);
    printf("no of vowels: %d\n", v);
    printf("no of consonants: %d\n", c);
    return 0;
}
```
7)
```c
#include <stdio.h>
double iteration(int n, double x) {
    double res = 1.0;
    double item = 1.0;
    for (int i = 1; i <= n; i++) {
        item *= x / i;
        res += item;
    }
    return res;
}
int main() {
    int n;
    double x=2.0;
    printf("Enter n value: ");
    scanf("%d", &n);
    printf("Enter x value: ");
    scanf("%lf", &x);
    double add = iteration(n, x);
    printf("add: %.6f\n", add);
    return 0;
}
```




