#include<stdio.h>
/* print Celcius-Fahrenheit table
     for fahr = 0,5,10,.... , 100 */
main()
{
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;    /* lower limit of temperature table */
    upper = 100;  /* upper limit */
    step = 5;     /* step size */

    celsius = lower;
    printf("celsius\t  fahr\n");
    printf("*******\t  ****\n");
    while ( celsius <= upper ) {
        fahr = (9.0 *celsius)/5.0 + 32;
        printf("%3.0f\t%6.1f\n",celsius,fahr);
        celsius = celsius +step;
    }
}
