#include<stdio.h>
#include<string.h>
struct node
{
    int a;
    float b;
    char c;
};
struct node d={5,13.3,'s'};
int main(void)
{
    printf("%d\n",d.a);
    printf("%f\n",d.b);
    printf("%c\n",d.c);
    return 0;
}

