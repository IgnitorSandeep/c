#include<stdio.h>
int main(void)
{
     static int var =5;
     if(var--)
     {
         main();
         printf("%d ",var);
     }

     return 0;
}
//output:
//*******
// -1 -1 -1 -1 -1

