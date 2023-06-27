
1 . The size of int in C is 4 bytes;


2.  type of arr is array to integer,
    type of ptr is pointer to integer.

3.
```c
#include <stdio.h>

void reverseArray(int arr[], int size)

void main(){
   int arr2[] = reverseArray();
   printf(arr2);
}

void reverseArray(int arr[], int size) {
    int left = 0;
    int right = size - 1;

    while (left < right) {
        int temp = arr[left];
        arr[left] = arr[right];
        arr[right] = temp;
        left++;
        right--;
    }
}
```


4

```c

void cpy(int *dest, int *src, int *end) {
    while (src < end) {
        *dest = *src;
        dest++;
        src++;
    }
}


```

5.
```

```

6.
```c
#include <stdio.h>
#include <ctype.h>
void count(char *str)
{
    int vowels = 0, consonants = 0;
    int i;
    char ch;
 
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == 'a' || str[i] == 'e'|| str[i] == 'i' || str[i] == 'o'|| str[i] == 'u')
            vowels++;
        else
            consonants++;
    }
    printf("\nVowels: %d\n", vowels);
    printf("Consonants: %d", consonants);
}
 
int main()
{
    char *str = "Hemanth";
    printf("Word: %s", str);
 
    count(str);
 
    return 0;
}


```

7.
