#include<stdio.h>
int main()
{
      int x,y,*a,*b,temp;
      printf("enter the value of x and y\n");
      scanf("%d\n%d\n",&x,&y);
      printf("%d\n%d\n",x,y);
      printf("befor swapping x=%d\n y=%d\n",x,y);
      a=&x;
      b=&y;
      temp=*b;
      *b=*a;
      *a=temp;
      printf("after swapping x=%d\n y=%d\n",x,y);
      return 0;
      
}