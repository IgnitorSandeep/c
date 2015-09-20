#include<stdio.h>
#define TRUE 1
#define FALSE 0
main()
{
    int n;
    while(TRUE)
    {
        printf("Enter the value of n:\n");
        scanf("%d",&n);

        if(n<2)
        {
            printf("n is less than 2.\n");
        }
        else if(n<4)
        {
            printf("n is less than 4.\n");
        }
        else
            printf("n is bekar.\n");
    }

    return;
}
