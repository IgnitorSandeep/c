#include<stdio.h>
void change(int *var,int value){
    *var = value;
}
int main(void)
{
    int **p;
    int i = 5,j=6, k =7;
    int *ip1 = &i,*ip2=&j;
    p = &ip1;
    printf("Before change:\t i= %d\n",i);
    change(ip1,4);
    printf("After change to 4:\t i= %d\n",i);
    change(ip1,9);
    printf("After change to 9:\t i= %d\n",i);
    change(ip1,8);
    printf("After change to 8:\t i= %d\n",i);
}
