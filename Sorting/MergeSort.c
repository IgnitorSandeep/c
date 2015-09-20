#include<stdio.h>

void Merge(int *arr,int p,int m,int q){
    int larr[m-p+1];
    int rarr[q-m];

    int i=0;

    for(i=0;i<m-p+1;i++)
        larr[i]=arr[p+i];

    for(i=0;i<q-m;i++)
        rarr[i]=arr[m+1+i];

    i=0;
    int j=0,k=0;
    for(i=0,j=0,k=p;i<m-p+1 && j<q-m && k<=q;k++)
    {
        if(larr[i]<=rarr[j])
        {
            arr[k]=larr[i];
            i++;
        }
        else
        {
            arr[k]=rarr[j];
            j++;

        }
    }

    while(i<m-p+1 )
    {
        arr[k]=larr[i];
        i++;
       k++;
    }
    while(j<q-m)
     {
         arr[k]=rarr[j];
         j++;k++;
     }
}

void MergeSort(int *arr,int p,int q){

    if(p==q)
        return;
    else if(p==q-1 )
    {
        if(arr[q]<arr[p])
        {
            int t=arr[p];
            arr[p]=arr[q];
            arr[q]=t;
            return ;
        }
    }
    else
    {
        int  m=(p+q)/2;
        MergeSort(arr,p,m);
        MergeSort(arr,m+1,q);
        Merge(arr,p,m,q);
        return;
    }
}


int main(){
    //int arr[]={1,5,7,123,4,21,111,213,11,9,2,8};
    //int arr[]={1,3,6,2,1,3,4,5,3,3,5,6};
    //int arr[]={11,3,5,9,2,3,4,5,6,7,90,11,23,55,67,3,3,4,334,43,5466};
    int arr[] = {3,5,1};
    int size = sizeof(arr)/sizeof(arr[0]);
    MergeSort(arr,0,size-1);
    int i=0;
    while(i<size)
    {
        printf("%d\t",arr[i]);
        i++;
    }

    return 0;
}
