#include<stdio.h>
main()
{
    int c;
    int lc=0;
    int sc=0;
    int tc=0;

    while((c=getchar())!=EOF)
    {
        if(c==' ')
            sc++;
        if(c=='\n')
            lc++;
        if(c=='\t')
            tc++;
    }
    printf("Line Count = %d,Space Count = %d, Tab Count = %d\n",lc,sc,tc);
}
