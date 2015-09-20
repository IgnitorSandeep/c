#include<stdio.h>
int main()
{
    struct item
    {

        int itemcode;
        float price;
    };

    struct item a[5];
    int i,item;
    float pricei;

    //Scanning the value of complete array
    printf("Enter the value of item code and price\n");
    for(i = 0;i<5;i++)
    {
        printf("Item %d\t:\t",i+1);
        scanf("%d %f",&item,&pricei);
        a[i].itemcode=item;
        a[i].price=pricei;
    }
    printf("\n\nEntered Values are \n");
    //Printing the complete array
    for(i=0;i<5;i++)
    {
        printf("%d %f \n",a[i].itemcode,a[i].price);
    }

    return 0;
}
