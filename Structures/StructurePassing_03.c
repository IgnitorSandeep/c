#include<stdio.h>
struct player
{
    char name[20];
    int age;
};
struct player p1 = {"Sandeep Singh",30};

int main()
{
    printf("%d",p1.age);

    return 0;
}
