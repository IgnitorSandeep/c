#include<stdio.h>
int main()
{
    static int i =0;
    printf("\n%d . DONE ",i);
    if(++i!=100)
        main();
    return 0;
}
