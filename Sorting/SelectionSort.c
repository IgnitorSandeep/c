#include<stdio.h>

/*
Swapping elements of array
*/
void swap(int *a,int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

/*
 display all element of array
*/
void printArray(int arr[],int start,int end){

    int i=0;
    for(i=start;i<end;i++){
        printf("%d ",arr[i]);
    }
}

/*
 Selection Sorting logic
*/
void selectionSort(int arr[],int n){
    int i,j,k;
    int min_index;
    for(i=0;i<n-1;i++){
        min_index = i;
        for(j=i+1;j<n;j++){
            if(arr[j] < arr[min_index])
                min_index = j;
        }
        swap(&arr[min_index],&arr[i]);
    }
}

int main()
{
    int arr[]={3,4,1,2,7,9,8};
    int length = sizeof(arr)/sizeof(arr[0]);
    //Print Array Before Sorting
    printf("Before Sorting\n");
    printArray(arr,0,length-1);

    //Calling sorting logic on array
    selectionSort(arr,length-1);

    //Print Array After Sorting
    printf("\nAfter Sorting\n");
    printArray(arr,0,length-1);

    return 0;
}
