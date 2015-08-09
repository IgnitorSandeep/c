#include<stdio.h>
int binarySearch(int a[],int l,int r,int x)
{
  if(l<r)
  {
    int mid = (l+r-1)/2;
    if(a[mid]==x)
        return mid;
  }

}

int main()
{
    int arr[]={1,2,3,4,6,5,7,8,9,10};
    int size = sizeof(arr)/sizeof(arr[0]);
    printf("element present at index %d ",binarySearch(arr,0,size-1,5));

    return 0;
}
