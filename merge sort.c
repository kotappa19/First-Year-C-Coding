#include<stdio.h>
int main()
{
      int a[10],i,j,n,ele;
      printf("enter the elememts:\n");
      scanf("%d",&n);
      printf("%d\n",n);
      printf("enter the array elements:\n");
      for(i=0;i<n;i++)
      {
            scanf("%d",&a[i]);
            printf("%d\n",a[i]);
      }
      for(i=1;i<n;i++)
      {
            j=i;
            while(j>=1&&a[j]<a[j-1])
            {
                  if(a[j]<a[j-1])
                  {
                        ele=a[j];
                        a[j]=a[j-1];
                        a[j-1]=ele;
                  }
                  j=j-1;
            }
      }
      printf("after merge sort\n");
      for(i=0;i<n;i++)
      {
            printf("%d\t",a[i]);
      }
      return 0;
}