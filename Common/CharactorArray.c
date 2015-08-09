#include<stdio.h>
#define MAXLINE 100

int getline(char line[],int MAXLINE);
void copy(char to[],char from[]);

/**
 print longest line
*/
int main(void)
{
    int len;    /* Current Line Length  */
    int max;    /* max Line Length      */
    int line[MAXLINE];      /* current input line      */
    int longest[MAXLINE];   /* longest line saved here */

    max = 0;

   while((len = getline(line,MAXLINE))>0)
   {
        if(len>max)
        {
            max =len;
            copy(longest,line);
        }
   }

   if(max>0)
    printf("s",longest);
   return 0;
}

int getline(int line[],int limit)
{
  int c,i;
  for(i=0;i<lim-1 && (c=getchar())!=EOF && c!='\n';++i)
  {
    line[i] = c;
  }
  if(c=='\n')
  {
      line[i] = c;
      ++i;
  }
  line[i]='\0';

  return i;
}

/*
Copy an array 'from'to another array 'to'
*/
void copy(int to[],int from[])
{
    int i =0;
    while((to[i]=from[i])!='\0')
        ++i;
}
