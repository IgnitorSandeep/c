/**
*
* Convert a string to a float.
*
* @param: character array
* @param: float passed by reference
* @return: bool, true upon success
*/
#include<stdio.h>

double pw (double base, int power)
{

	double result=1.;
	int i, nloop = abs (power);
	for (i=0; i<nloop; i++)
	{
		result *= base;
	}

	if (power >= 0)
		return result;
	else
		return 1./result;

}


int intValue(char c)
{
    switch(c)
    {
    case '1':
        return 1;
    case '2':
        return 2;
    case '3':
        return 3;
    case '4':
        return 4;
    case '5':
        return 5;
    case '6':
        return 6;
    case '7':
        return 7;
    case '8':
        return 8;
    case '9':
        return 9;
    case '0':
        return 0;
    }
}
float stof(char *c)
{
    float value=0;
    int i=0;
    int base = 10;
    int size = sizeof(c);
    int isDecArrived = 0;
    int placeDigit;
    int count =0;
    for(i=0;i<size;i++)
    {
        if(c[i]=='.')
        {
            isDecArrived = 1;
        }

        if(c[i]=='0'||c[i]=='1'||c[i]=='2'||c[i]=='3'||c[i]=='4'||c[i]=='5'||c[i]=='6'||c[i]=='7'||c[i]=='8'||c[i]=='9')
        {
            placeDigit = intValue(c[i]);
            if(!isDecArrived)
            {
                value = base*value + placeDigit;
            }
            else
            {
                count++;
                printf("Count = %d\n",count);
                base=pw(10,count*(-1));
                printf("Base        = %f\n",base);
                value = value + base*placeDigit;
                printf("Place Value = %f\n",base*placeDigit);
            }
        }
    }
    return value;
}
int main(void)
{
    float f;
    char *a = "12.221213";
    printf("[USING PW  ] %f\n",pw(5,-2));
    printf("[USING STOF] %f",stof(a));

    return 0;
}
