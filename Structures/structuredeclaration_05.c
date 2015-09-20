#include<stdio.h>
struct player
{
    char name[20];
    int age;
};
struct player p2,p1 = {"Sandeep Singh",24};

int main()
{

    p2= p1;

    printf("Entries of p1 is \n");
    printf("Name : %s\n",p1.name);
    printf("Age  : %d\n",p1.age);

    printf("Entries of p2 is \n");
    printf("Name : %s\n",p1.name);
    printf("Age  : %d\n",p1.age);

    return 0;
}
