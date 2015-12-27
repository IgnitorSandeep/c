#include<stdio.h>
int binarySearch(int arr[],int l,int r,int x){

    while(l<r){
        int mid = (l+r)/2;
        if(arr[mid]==x)
            return mid;
        if(arr[mid]>x){
            r =mid -1;
        }
        if(arr[mid]<x){
            l =mid +1;
        }
    }

    return -1;

}
int main(void){

    int arr[] = {1,2,3,5,6,7,8,12,13,15,27,29,31,45,49};
    int n = sizeof(arr)/sizeof(arr[0]);
    printf("Length of the array is %d.\n",n);
    int l=0;
    int r = n-1;
    int x = 45;
    int pos = binarySearch(arr,l,r,x);
    (pos==-1)?printf("number not present in the array"):printf("%d is at index %d.",x,pos);

}
