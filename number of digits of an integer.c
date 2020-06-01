#include<stdio.h>  
 int main()
 {
       int n,i=0;
       printf("enter the number:\n");
       scanf("%d",&n);
       while(n!=0)
       {
             i++;
             n=n/10;
       }
       printf("number of digits in a number is %d\n",i);
       return 0;
 }
