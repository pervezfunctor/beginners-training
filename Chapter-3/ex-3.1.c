#include<stdio.h>
int binarySearch(int arr[],int low,int high,int target){
    while(low <= high){
        int mid = (low + high) / 2;
        if(arr[mid] == target)
            return mid;
        if(arr[mid] < target)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
}
int main() {
    int n, arr[n], target=1;
    printf("enter the size of the array:");
    scanf("%d", &n);
    printf("enter the sorted elements in the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int res=binarySearch(arr,0,n-1,target);
    if(res == -1)
        printf("element not found\n");
    else
        printf("element found at index %d\n",res);
    return 0;
}