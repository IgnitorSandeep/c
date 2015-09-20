#include<stdio.h>
int main(void)
{
    int a[10]={10,20,30,40,50,60,70,80,90,100};
    int *p,*q;
    p=&a[9];
    q=&a[1];
    // base adress of array can not be changed
    //a = q;
    printf("a=%d\n\n",a);
    printf("*(a+0)=%d\n",*(a+0));
    printf("(a+0)=%d\n",(a+0));
    printf("*(a+1)=%d\n",*(a+1));
    printf("*(2293484)+1=%d\n",*(a+8)+1);
    printf("*(a+2)=%d\n",*(a+2));
    printf("(a+2)=%d\n",(a+2));
    printf("*(a+3)=%d\n",*(a+3));
    printf("(a+3)=%d\n",(a+3));
    printf("p=%d\n",(p));
    printf("q=%d\n",(q));
    printf("p-q=%d\n",(p-q));
    // Addition,division & multplications is not possible between two pointers
    //printf("p*q=%d\n",(p*q));

    return 0;
}
