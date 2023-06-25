//
// Created by technoidentity on 14/6/23.
//
//binary search
#include <stdio.h>
int binarysearch(int arr[],int low,int high,int target){
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]==target)
            return mid;
        if(arr[mid]<target)
            low=mid+1;
        else
            high=mid-1;
    }
    return -1;
}
int main(){
    int n,arr[n],target=4;
    printf("enter the array szie:");
    scanf("%d",&n);
    printf("array:");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int result= binarysearch(arr,0,n-1,target);
    if(result==-1)
        printf("element not found\n");
    else
        printf("element found at index %d\n",result);
    return 0;
}