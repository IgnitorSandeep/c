#include<stdio.h>
int findOdd(int arr[],int size){
    //res is intialized to zero because
    //[0 xor num] = num
    int res = 0,i;
    for(i=0;i<size;i++){
        res ^=arr[i];
    }
    return res;
}
int main(void){

   int arr[] = {12, 12, 14, 90, 14, 14, 14};
   int n = sizeof(arr)/sizeof(arr[0]);
   printf ("The odd occurring element is %d ", findOdd(arr, n));
   return 0;
}
