#include<stdio.h>
int findMissingNumber_Formula(int arr[],int n){
    int sum = n*(n+1)/2;
    int i;
    int missedNum;
    int actualSum=0;
    for(i=0;i<n-1;i++){
        actualSum += arr[i];
    }
    missedNum = sum-actualSum;

    return missedNum;
}

int findMissingNumber_XOR(int arr[],int n){

    int missedNum=0;
    int actual_XOR_Value=arr[0];
    int std_XOR_Value=1;
    int i;

    for(i=0;i<n-1;i++){
        actual_XOR_Value^=arr[i];
    }

    for(i=1;i<=n;i++){
        std_XOR_Value^=i;
    }

    missedNum = actual_XOR_Value^std_XOR_Value;

    return missedNum;
}

int main(void)
{
    int arr[]={1,2,3,4,5,6,7,8,9};
    int size = sizeof(arr)/sizeof(arr[0]);
    printf("[USING FORMULA] Missing value is %d.\n",findMissingNumber_Formula(arr,size+1));
    printf("[USING BITWISE XOR] Missing value is %d.\n",findMissingNumber_XOR(arr,size+1));

    return 0;
}

