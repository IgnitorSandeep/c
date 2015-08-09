#include<stdio.h>
int main()
{
    static int i =100;
    printf("\n%d . DONE ",101-i);
    main(1/--i);
    return 0;
}
