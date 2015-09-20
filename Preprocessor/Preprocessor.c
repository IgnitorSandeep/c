#include "stdio.h"
//#define square(x) x*x
#define VERBOSE 5
inline int square(int x) { return x * x ;}
int main(void)
{
    #if  VERBOSE >= 2
        printf("Trace Message\n");
    #endif //VERBOSE

    printf("Square of 5 is %d. \n",square(5));
    int x = 36/square(6);
    printf("%d\n",x);

    return 0;
}
