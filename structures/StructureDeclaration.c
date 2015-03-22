#include<stdio.h>
int main()
{
    struct item
    {

        int itemcode;
        char name[15];
        float price;
    };
    struct item a,b,c;
    printf("Enter the detail of item\n");

    //scanning the value of each item a,b & c
    scanf("%d %s %f",&a.itemcode,&a.name,&a.price);
    scanf("%d %s %f",&b.itemcode,&b.name,&b.price);
    scanf("%d %s %f",&c.itemcode,&c.name,&c.price);
    printf("\n");

    //printin the value of each item a, b & c
    printf("%d %s %f\n",a.itemcode,a.name,a.price);
    printf("%d %s %f\n",b.itemcode,b.name,b.price);
    printf("%d %s %f\n",c.itemcode,c.name,c.price);
    printf("\n");

    return 0;
}
