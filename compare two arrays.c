//4AL19CS047
#include<stdio.h>
#include<string.h>
int main()
{
      char arr1[200],arr2[200];
      printf("enter the first string:\n");
      gets(arr1);
      printf("enter the second string:\n");
      gets(arr2);
      printf("entered strings are \narr1=%s\narr2=%s\n",arr1,arr2);
      if(strcmp(arr1,arr2)==0)
      {
            printf("entered strings are equal\n");
      }
      else
      {
            printf("entered strings are not equal\n");
      }
}
