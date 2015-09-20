#include<stdio.h>
struct s
{
    char ch;
    int i;
    float a;
};

void f(struct s a)
{
    printf("%c %d %f \n",a.ch,a.i,a.a);
    return ;
}

void g(struct s *b)
{
    printf("%c %d %f \n",b->ch,b->i,b->a);
    return;
}

int main(void)
{
    struct s var = {'C',100,12.55};
    f(&var);
    g(var);
    return 0;
}
