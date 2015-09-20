#include<stdio.h>
struct player
{
    char name[20];
    int age;
};

int main(void)
{
    struct palyer p1 = {"sandeep",30};
    printf("%s\n",p1.name);
    printf("%d\n",p1.age);

    return 0;
}
