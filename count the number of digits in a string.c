#include<stdio.h>
int main()
{
      char str[100];
      int count,nc=0,sum=0;
      printf("enter the string containing both digits and alphabets:\n");
      scanf("%s",str);
      printf("%s",str);
      for(count=0;str[count]!='\0';count++)
      {
            if((str[count]>='0')&&(str[count]<='9'))
            {
                  nc+=1;
                  sum+=(str[count]-'0');
            }
      }
      printf("number of digits in the string is %D\n",nc);
      printf("sum of all digits of the string is %d\n",sum);
}