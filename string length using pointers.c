#include<stdio.h>
int main()
{
      char str1[10];
      int count,i;
      int *s;
      s=&count;
      printf("enter the string:\n");
      scanf("%s",&str1);
      printf("%s\n",str1);
      count=0;
      for(i=0;str1[i]!='\0';i++)
      {
            *s=*s+1;
      }
      printf("string length is %d",*s);
}