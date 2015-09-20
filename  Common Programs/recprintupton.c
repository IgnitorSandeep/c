#include<stdio.h>

//print the elemens of an array recursively
void print(int a[],int start, int last)
{
    if(start==last)
    {
        printf("%d ",a[start]);
        return;
    }
    else
    {
        printf("%d ",a[start]);
        print(a,start+1,last);
    }

}

int main(void)
{
    int a[10]={0,1,2,3,4,5,6,7,8,9};
    int length= (sizeof(a)/sizeof(a[0]));
    print(a,0,length-1);
    return;
}
