#include<stdio.h>
#include<stdlib.h>

void printNGE(int arr[],int n)
{
    int i,j;
    int next;
    for(i = 0;i<n;i++)
    {
        next = -1;
        for(j=i+1;j<n;j++)
        {
            if(arr[i]<arr[j])
            {
                next = arr[j];
                break;
            }
        }
        printf("%2d <--> %2d\n",arr[i],next);
    }
}

int main(void)
{
    int arr[] = {13,11,24,54,23,16};
    int size = sizeof(arr)/sizeof(arr[0]);
    printNGE(arr,size);

    return 0;
}
