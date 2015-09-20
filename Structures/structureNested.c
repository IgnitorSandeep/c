#include<stdio.h>
struct part
{
    char type;
    int qty;
};
struct vehicle
{
    char maruti[20];
    struct part bolt;

};
struct vehicle v;

int main()
{
    v.bolt.qty = 300;
    printf("%d",v.bolt.qty);

    return 0;
}
