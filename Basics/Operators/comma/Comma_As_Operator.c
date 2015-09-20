#include<stdio.h>

int f1(){
    return 5;
}

int f2(){
    return 10;
}
int main(void){

    int i = (2,4);
    int j = (f1(),f2());
    printf("i = %2d\n",i);
    printf("j = %2d\n",j);
    return 0;
}
