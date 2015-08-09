#include<stdio.h>
main()
{
    int i;
    for(i=0; i<10; ++i)
        printf("%2d %6d %9d\n",i,power(2,i),power(-3,i));

    return 0;
}

/* power: raise base to n-th power; n>=0 */
int power(int base, int n)
{
    int i,p ;

    p=1;
    for(i=1;i<=n;i++)
    {
        p = p *base;
    }

    return p;
}
