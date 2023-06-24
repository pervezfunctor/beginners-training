//
// Created by technoidentity on 14/6/23.
//
#include <stdio.h>
int binsearch( int x , int v[], int n);
int main(){
    int arr[10]={ 23,56,89,100,112,256,456};
    int x =113;
    int len = 5;
    printf("%d", binsearch(x,arr,len));
}
int binsearch( int x , int v[], int n){
    int low,high,mid,count=0;
    low = 0;
    high = n - 1;
    mid=low+high/2;
    while(x != v[mid] && count < n ){
        mid = (low + high) / 2;
        if(x < v[mid])
            high = mid -1;
        else
            low = mid + 1;
       count++;
    }
    if(x == v[mid])
        return mid;
    else
        return -1;
}