#include<stdio.h>
int main()
{
      char s1[50],s2[50],*str1,*str2;
      int i,equal=0;
      printf("enter the first string:\n");
      scanf("%s",&s1);
      printf("%s\n",s1);
      printf("enter the second string:\n");
      scanf("%d",&s2);
      printf("%s\n",s2);
      str1=s1;
      str2=s2;
      while(*str1==*str2)
      {
            if(*str1=='\0'||*str2=='\0')
            break;
            str1++;
            str2++;
      }
      if(*Str1=='\0'&&*str2=='\0')
      printf("strings are equal\n");
      else
      printf("strings are not equal\n");
}