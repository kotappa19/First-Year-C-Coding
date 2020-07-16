#include<stdio.h>
#include<string.h>
int main()
{
      char str[100],temp;
      int i,j;
      printf("enter the string:\n");
      scanf("%s",str);
      int n=strlen(str);
      for(i=0;i<n-1;i++)
      {
            for(j=i+1;j<n;j++)
            {
                  if(str[i]>str[j])
                  {
                        temp=str[i];
                        str[i]=str[j];
                        str[j]=temp;
                  }
            }
      }
      printf("sorted string is %s",str);
      return 0;
}