#include<stdio.h>
main()
{
    int c;
    int space='';
    int lastchar;
    while((c=getchar())!=EOF)
    {
        if(c!=space){
            puchar(c);
        }

        if(c==space)
            if(lastchar!=space)
                putchar(c);
    }
    printf("Line Count = %d,Space Count = %d, Tab Count = %d\n",lc,sc,tc);
}
