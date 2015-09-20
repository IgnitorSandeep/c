#include<stdio.h>
int main()
{
    struct account
    {
        int no;
        char acc_no[15];
        float bal;
    };
    struct account a1,a2,a3;
    printf("Enter the nos. names and balances:\n");
    scanf("%d %s %f",&a1.no,a1.acc_no,&a1.bal);
    scanf("%d %s %f",&a2.no,a2.acc_no,&a2.bal);
    scanf("%d %s %f",&a3.no,a3.acc_no,&a3.bal);

    printf("\n\nAcc Names Balance\n");
    printf("%d %s %f\n",a1.no,a1.acc_no,a1.bal);
    printf("%d %s %f\n",a2.no,a2.acc_no,a2.bal);
    printf("%d %s %f\n",a3.no,a3.acc_no,a3.bal);

    return 0;
}
