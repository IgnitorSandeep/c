#include<stdio.h>
int main(void)
{
    int a[5]={10,20,30,40,50};
    int i;
    int len = sizeof(a)/sizeof(a[0]);
    printf("Content of a is \n");
    for(i=0;i<len;i++){
        printf("%d\t",a[i]);
    }
    printf("\n\n");

    int *b[5]={a+3,a+2,a+1,a+4,a};
    int length = sizeof(b)/sizeof(b[0]);
    printf("Content of *b is \n");
    for(i=0;i<length;i++){
        printf("%d\t",b[i]);
    }
    printf("\n\n");

    printf("value at content of *b is \n");
    for(i=0;i<length;i++){
        printf("%d\t",*b[i]);
    }
    printf("\n\n");


    return 0;
}
