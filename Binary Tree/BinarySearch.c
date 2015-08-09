#include<stdio.h>
int main(){

    int k[]={2,3,4,5,6,7,8,9,12,34,45};
    int item=ProcessArray(k,5,11);
    printf("%d",item);
}
int ProcessArray(int *listA, int x, int n)
{
    int i, j, k;
    i = 0;
    j = n-1;
    do
    {
        k = (i+j)/2;
        if (x <= listA[k])
            j = k-1;
        if (listA[k] <= x)
            i = k+1;
    }
    while (i <= j);
    if (listA[k] == x)
        return(k);
    else
        return -1;
}
