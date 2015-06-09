#include<stdio.h>
int main()
{
    struct player
    {
        char name[20];
        int age;
    };
    struct player p1 = {"sandeep",32};

    printf("%s\n",p1.name);
    printf("%d",p1.age);

    return 0;
}
