#include<stdio.h>
int main()
{
      char str1[100]="kotappa",str2[100]="gandudi";
      char str3[200];
      int i=0,j=0;
      printf("first string is  %s\n",str1);
      printf("second string is %S\n",str2);
      while(str1[i]!='\0')
      {
            str3[j]=str1[i];
            i++;
            j++;
      }
      i=0;
      while(str2[i]!='\0')
      {
            str3[j]=str2[i];
            i++;
            j++;
      }
      str3[j]='\0';
      printf("concatenated string is %s\n",str3);
      return 0;
}