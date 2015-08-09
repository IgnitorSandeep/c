#include<stdio.h>
int binarySearch(int arr[],int l,int r,int x){
    if(l<r){
        int mid = (l+r)/2;
        if(arr[mid]==x){
            return mid;
        }
        else if(arr[mid]>x){
            return binarySearch(arr,l,mid-1,x);
        }
        else{
           return binarySearch(arr,mid+1,r,x);
        }
    }
    return -1;
}

int main(void){

    int arr[10]={2,5,7,9,11,13,15,16,73,86};
    int n = (int)sizeof(arr)/sizeof(arr[0]);
    printf("Size of array is %d.\n",n);
    int x = 16;
    int position = binarySearch(arr,0,n-1,x);
    (position==-1)?printf("Element not present in array\n"):printf("Element present at index %d.\n",position);
    return 0;
}
