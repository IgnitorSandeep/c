#include<stdio.h>

struct point {

    int x;
    int y;

};

int main(){

    struct point A = {5,6};
    struct point B;

    printf("X Co-ordinate of A is:%d\n",A.x);
    printf("Y Co-ordinate of A is:%d\n",A.y);

    printf("Enter x Co-ordinate of B :");
    scanf("%d",&B.x);
    printf("Enter y Co-ordinate of B :");
    scanf("%d",&B.y);

    printf("\n\nA : [%3d,%3d]\n",A.x,A.y);
    printf("\n\nB : [%3d,%3d]\n",B.x,B.y);



return 0;
}
