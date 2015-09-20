#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int getString(char *str)
{
    int  k=0;
    char c;
    while((c=getchar())!=EOF && c!='\n')
    {
        str= (char *)realloc(str,(sizeof(char))*(k+1));
        str[k++]=c;
    }

    if(c=='\n')
    {
          str= (char *)realloc(str,(sizeof(char))*(k+1));
          k++;
    }

    str[k]='\0';

    return k;
}

int main()
{
    int i,j,t,len,val;
    int * arr;char c;

    scanf("%d",&t);

    char *str;
    for(i=0;i<t;i++)
    {
    //
    str= (char *)malloc(sizeof(char));
    arr=(int *)calloc(25,sizeof(int));
    getString(str);
    puts(str);
    len=strlen(str);
    printf("\nlen is %d\n",len);

    if(len==0)
        break;

    if(len%2!=0)
        printf("-1\n");
    else
    {
        for(j=0;j<len/2;j++)
        {
            c=str[j];
            val=c-97;
            arr[val]++;
        }
        for(;j<len-1;j++)
        {
            c=str[j];
            val=c-97;
            if(arr[val]>=1)
                arr[val]--;
        }
        val=0;
        for(j=0;j<26;j++)
        {
            if(arr[j]!=0);
                val+= arr[j];
        }

        printf("%d\n",val);

    }

    free(arr);
    free(str);
    arr=NULL;
    str=NULL;
    len=0;
    val=0;
    }

}
