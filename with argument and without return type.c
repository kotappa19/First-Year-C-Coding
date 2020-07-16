//with argument and without return type
#inclue<stdio.h>
void add(int i,int j);
int main()
{
      int sum,a=30,b=20;
      add(a,b);
      
}
void add(int i,int j)
{
      int sum;
      sum=i+j;
      printf("sum is %d",sum);
}
