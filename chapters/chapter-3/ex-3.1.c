#include <stdio.h>

int binarySearch(int array[], int length, int target);

void main(){
    int array[] = {0,1,2,3,4,5};


    int answer =  binarySearch(array,6,2);
    printf("%d",answer);

}

int binarySearch(int array[], int length, int target){
    int mid;
    int first = 0;
    int last = length - 1;
    mid = (first + last) / 2; 
   while (first <= last && target != array[mid])
  {
    if(target <= array[mid]){
        last = mid - 1;
    }
    else{
        first = mid + 1;
    }
    mid = (first + last) / 2;
  }
    if(target == array[mid]){
        return mid;
    }
    return -1;  
   
}


/* Both the codes took 3 iterations to find the target element. So, I think both efficiencies are same
But in the 2nd code returns mid value in the first place if the target is middle element*/