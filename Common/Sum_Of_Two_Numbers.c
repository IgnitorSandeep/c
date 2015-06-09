#include<stdio.h>

int add_witout_operator(int x,int y)
{


    return printf("%*c%*c",x,'\r',y,'\r');
     //return printf("%4c",'5');
}


int add(int x,int y)
{

    return x+y;
}

int main(void)
{
     printf("4+3 = %d",add(4,3));
     printf("7+3 = %d",add_witout_operator(7,3));
    return 0;
}
