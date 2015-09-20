#include<stdio.h>
#include<string.h>
struct node
{
    int a;
    float b;
    char c;
};
struct node d={5,13.3,'s'};
struct node *e = &d;
int main(void)
{
    printf("%d\n",d.a);
    printf("%f\n",d.b);
    printf("%c\n",d.c);

    printf("%u\n",e);

    //accessing structure values through pointers
    printf("%d\n",(*e).a);
    printf("%f\n",(*e).b);
    printf("%c\n",(*e).c);

    //other way to accessing structure values through pointers
    printf("%d\n",e->a);
    printf("%f\n",e->b);
    printf("%c\n",e->c);

    return 0;
}

