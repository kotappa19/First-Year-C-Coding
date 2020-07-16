//with argument and with return type
#include<stdio.h>
int add(int i,int j);
int main()
{
      int sum,a=30,b=20;
      sum=add(a,b);
      printf("sum is %d",sum);
}
int add(int i,int j)
{
      int sum;
      sum=i+j;
      return sum;
}