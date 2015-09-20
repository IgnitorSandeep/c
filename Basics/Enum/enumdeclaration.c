#include<stdio.h>

//1. Enums are user defined data types
//2. Used for make program easy to read and maintain

/*
*Two enum names can have same value.
*For example, in the following C program both ‘Failed’ and ‘Freezed’ have same value 0.
*
*/
enum State { Working = 1,Failed = 0, Error = -1, Freezed = 0 };

/*
*If we do not explicitly assign values to enum names, the compiler by default assigns values starting from 0.
*For example, in the following C program, sunday gets value 0, monday gets 1, and so on.
*/
//enum Days {sunday, monday, tuesday, wednesday, thursday, friday, saturday};


/**
We can assign values to some name in any order. All unassigned names get value as value of previous name plus one.
*/
enum day {sunday = 1, monday, tuesday = 5,wednesday, thursday = 10, friday, saturday};

int main()
{
    enum day d = thursday;
    printf("thursday = %d\n",d);
    printf("friday = %d\n",friday);
    printf("%d %d %d %d %d %d %d\n", sunday, monday, tuesday, wednesday, thursday, friday, saturday);
    printf("Working = %d,   Failed = %d,   Error = %d\n",Working,Failed,Error);
    return 0;

}
