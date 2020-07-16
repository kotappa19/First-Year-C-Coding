#include<stdio.h>
int gcd(int x,int y);
int main()
{
      int num1,num2,hcf,lcm;
      printf("enter the two integer values:\n");
      scanf("%d%d",&num1,&num2);
      printf("%d\n%d\n",num1,num2);
      hcf=gcd(num1,num2);
      lcm=(num1*num2)/hcf;
      printf("gcd of %d and %d is =%d",num1,num2,hcf);
      printf("lcm of %d and %d is =%d",num1,num2,lcm);
      return 0;
}
int gcd(int x,int y)
{
      if(y==0)
      {
            return x;
      }
      else
      {
            return gcd(y,x%y);
      }
}