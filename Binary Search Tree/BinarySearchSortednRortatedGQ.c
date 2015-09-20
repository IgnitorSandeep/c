#include<stdio.h>
int binarySearchRotated(int arr[],int i,int j,int x){

    if(i<j){
        int mid = (i+j)/2;
        if(arr[mid]>arr[mid+1]) return mid+1;
        else if(arr[mid]<x) return binarySearch(arr,,,x);


    }


}

int main(void)
{


}
