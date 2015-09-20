#include<stdio.h>
int main(void)
{
    int i;
    for(i=1;i<=20;i++)
    {
        switch(i)
        {
        case 1:
            i= i+5;
        case 2:
            i=i+6;
        default:
            i=i+3;
            break;
        }
        printf("%d ",i);
    }
    return 0;
}
//output
// 15 19 23
