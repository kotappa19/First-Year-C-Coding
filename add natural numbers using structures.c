#include<stdio.h>
struct add
{
      int a;
};
struct add1
{
      int b;
};
int main()
{
      struct add1 c2;
      {
            int c=0;
            c2.b=20;
            c2.c1.a=10;
            c=c2.c1.a+c2.b;
            printf("c=%d\n",c);
      }
}