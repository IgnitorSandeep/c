#include<stdio.h>

/* Shell Sort */
void shellSort(int arr[], int l, int r)
{
    int gap, i, j, temp;
    int len = r - l +1;
    for( gap = len/2; gap > 0; gap /= 2)
       for( i = gap; i < len; i++)
          for( j = i - gap; j>=0 && arr[j]>arr[j+gap]; j -= gap ) {
		
		temp       =  arr[j];
		arr[j]     =  arr[j+gap];
		arr[j+gap] =  temp;          

          }   

}

/* printing array */
void printArray(int arr[], int l, int r)
{
    int i;
    for( i = l;i<=r; i++)
	printf("%d ",arr[i]);
    printf("\n");

}

int main(void)
{
    int arr[] = { 12, 34,21,11,2,4,6,7,223,5998,499};
    int len = sizeof(arr)/sizeof(arr[0]);

    printf("Before Sorting the Array is :\n");
    printArray(arr,0,len - 1);

    shellSort(arr, 0, len -1);
    
    printf("After Sorting the Array is :\n");
    printArray(arr, 0, len - 1);	
    
    return 0;
}
