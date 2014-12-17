#include<stdio.h>
int main()
{
     int i = -1,j =-1, k = -1, l= 2,m;
     m = ((i++&&j++&&k++)||(l++));
     printf("i=%d, j=%d, k=%d, l=%d, m=%d",i,j,k,l,m);
     return 0;
}
//output:
//*******
// i=0, j=0, k=0, l=2, m=1
