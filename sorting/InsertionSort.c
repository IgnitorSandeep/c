#include<stdio.h>

void swapNum(int *a,int *b){
    int temp;
    temp = *a;
    *a=*b;
    *b=temp;
    return;
}

void insertionSort1(int arr[],int start,int end){
    int i,j,k;
    int x;
    for(i=start;i<=end;i++){
        x = arr[i];
        j = i;
        while( j>0 && arr[j-1]>x){
            arr[j]=arr[j-1];
            j = j-1;
        }
        arr[j]=x;
    }
    return;
}

void insertionSort2(int arr[],int start,int end){
    int i,j,k;
    int x;
    for(i=start;i<=end;i++){
       x = arr[i];
       for(j=i;j>0&&arr[j-1]>x; j--){
            arr[j]=arr[j-1];
       }
       arr[j]=x;
    }
    return;
}


void printArray(int arr[],int start,int end){
    int i;
    for(i=start;i<=end;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    return;
}

int main()
{
    int arr[5]={2,7,4,9,5};
    int len = sizeof(arr)/sizeof(arr[0]);
    int i;
    printf("Before Sorting \n");
    printArray(arr,0,len-1);
    //Sorting
    insertionSort2(arr,0,len -1);
    printf("After Sorting \n");
    printArray(arr,0,len-1);
    return 0;
}
