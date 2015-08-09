#include<stdio.h>
#include<string.h>
void swap(void **a,void **b)
{

    void *t;
    t = *a;
    *a = *b;
    *b = t;
}
int main()
{
    char *name[]={
                    "Sandeep",
                    "Sateesh",
                    "Shivam",
                    "Saurabh",
                    "Chutiya"
    };

    printf("Before Changing : %8s, %8s\n",name[2],name[3]);
    //char *temp = name[2];
    //name[2] = name[3];
    //name[3] = temp;
    swap(&name[2],&name[3]);
    printf("After Changing  : %8s, %8s\n",name[2],name[3]);

    return 0;
}
