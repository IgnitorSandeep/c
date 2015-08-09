#include<stdio.h>
void main()
{
	int i,j,k=0,count[300]={0};
	char ch,str[1000],str1[1000];
	printf("\n Enter the string to remove duplicasy\ n:");
	gets(str);
	for (i=0;str[i]!='\0';i++)
	{
        ch=str[i];
        count['']=0; / * U can use other delimiter inplace of space''here,just put that char inside'',for ex: count['A']=0 ; if u dnt want any delimiter, just remove this line.*/
        if(count[ch])
        continue;
	else
	{
	str1[k++]= ch;
	count[ch]= 1;
	}
	}
	puts(str1) ;
}
