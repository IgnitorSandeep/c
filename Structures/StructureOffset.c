#include<stdio.h>
struct a
{
    struct b
    {
        int i;
        float f;
        char ch;
    } x;
    struct c
    {
        int j;
        float g;
        char ch;
    }y;
};
int main()
{
    int *p;
    struct a z;
    fun(&z.y);
    printf("%d \t %f \t %c\n",z.x.i,z.x.f,z.x.ch);

    return 0;
}

void fun(struct c* p)
{
    int offset;
    //int *c=0;
    struct b *address;
    offset = sizeof(struct b);
    address= (struct b*)((char *)&(p->j)-(char *)offset);
    address->i=400;
    address->f=3.14;
    address->ch ='c';

   // printf("Offset is %d.",offset);
    //offset = (char*)&((struct c*)(&((struct a*)0)->y)->j) - (char *)((struct a*)0);
    printf("Offset Value is %d\n",offset);
    return;
}
