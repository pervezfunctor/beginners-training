#include <stdio.h>

int bin_search(int v[], int low, int high, int x) {
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if ( x == v[mid] )
            return mid;

        if ( x< v[mid])
            high = mid - 1;
        else
            low = mid + 1;
    }

    return -1;
}

int main() {
    int arr[] = {3,6,9,12,15,18,21,24,27};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 9;

    int result = bin_search(arr, 0, n - 1, x);

    if (result == -1)
        printf("not found\n");
    else
        printf("Element found at index %d\n", result);

    return 0;
}
