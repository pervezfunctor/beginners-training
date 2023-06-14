#include <stdio.h>
int binary_Search(int x,int a[],int n);
int main(){
    int arr[]={1,2,3,4,5,6,7,8,9};
    printf("%d", binary_Search(7,arr,9));
    return 0;
}
int binary_Search(int x,int a[],int n){
    int low,high,mid;
    low=0;
    high=n-1;
    mid = (low+high)/2;
    while (low < high && x != a[mid]){
        if(x<a[mid]){
            high=mid-1;
        }
        else{
            low=mid+1;
        }
        mid = (low+high)/2;
    }
    if(x==a[mid]){
        return mid;
    } else
        return -1;
}