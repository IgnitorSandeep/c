#include<stdio.h>
int main(void)
{
    int octNum = 011;
    printf("011   = %3d\n",octNum);

    int hexNum = 0x12;
    printf("0x12  = %3d\n",hexNum);

    char ch ='0';
    printf("'0'   = %3d\n",ch);
    printf("'0'-5 = %3d\n",ch-5);

    return 0;
}
