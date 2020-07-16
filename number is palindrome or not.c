#include<stdio.h>
int palindrome(int num);
int main()
{
      int num,result;
      printf("enter the number:\n");
      scanf("%d",&n);
      result=palindrome(num);
      if(result==1)
      printf("%d is palindrome number",num);
      else
      printf("%d is not a palindrome number",num);
      return 0; 
}
int  palindrome(int num)
{
      int rnum=0;r,n;
      n=num;
      while(n>0)
      {
            r=n%10;
            rnum=rnum*10+r;
            n=n/10;
      }
      if(rnum=num)
      return 1;
      else
      return 0;
}