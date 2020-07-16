#include<stdio.h>
int main()
{
      char str1[30],str2[30];
      int i;
      printf("enter two strings \n");
      gets(str1);
      gets(str2);
      i=0;
      while(str1[i]==str2[i]&&str1[i]!='\0')
      i++;
      if(str1[i]>str2[i])
      printf("str1 is greater than str2\n");
      else if(str1[i]<str2[i])
      printf("str2 is greater than sr1\n");
      else
      printf("str1 is equal to str2\n");
      return 0;
}
