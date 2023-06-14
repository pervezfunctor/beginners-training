#include<stdio.h>
int binsearch1(int arr[], int x, int len);
int main(){
    int arr[5]={10,20,30,40,50};
    int x=30;
    int len=5;
    printf("%d",binsearch1(arr,x,len));
}
int binsearch1(int arr[], int x, int len){
    int low=0,mid;
    int high=len-1;
    mid=(low+high)/2;
    while(low<=high && x != arr[mid]){
        mid=(low+high)/2;
        if(x<arr[mid]) {
            high = mid - 1;
        }
        else {
            low = mid + 1;
        }
    }
    if(x ==arr[mid]) {
        return mid;
    }
    else {
        return -1;
    }
}
