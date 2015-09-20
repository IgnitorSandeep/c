#include<stdio.h>
int main()
{
    // Enums values are considered as integers.
    // If the Values are not given then it auto -
    // matically assigns value to it as first
    // one will get 0 ,second one will get 1 and so on...
    enum list {zero, one, two, three, four, five};
    printf("zero = %d,  one = %d,  two = %d,  three = %d,  four = %d,  five = %d.\n\n",zero,one,two,three,four,five);

    // In case values are assigned to enum then
    // All the consequent enums get value increment by 1
    enum status { ERROR = -1, PASS, FAIL};
    printf("ERROR = %d,  PASS = %d,  FAIL = %d.\n",ERROR,PASS,FAIL);

    return 0;
}
