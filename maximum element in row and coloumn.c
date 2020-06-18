#include<stdio.h>
int main()
{
      int m,n,i,j,a[25][25],max[25];
      printf("enter the number of row and coloumns:\n");
      scanf("%d%d",&m,&n);
      printf("%d\t%d\n",m,n);
      printf("enter the elementd o the matrix:\n");
      for(i=0;i<m;i++)
      {
            for(j=0;j<n;j++)
            {
                  scanf("%d",a[i][j]);
                  printf("%d\t",a[i][j]);
            }
            printf("\n");
      }
      for(i=0;i<m;i++)
      {
            for(j=0;j<n;j++)
            {
                  if(a[i][j]>max[i])
                  {
                        max[i]=a[i][j];
                  }
            }
      }
      for(i=0;i<m;i++)
      {
            printf("maximum element in the row is %d\n",i+1);
            printf("%d\n",max[i]);
      }
      for(i=0;i<n;i++)
      {
            for(j=0;j<m;j++)
            {
                  if(a[j][i]>max[i])
                  {
                        max[i]=a[j][i];
                  }
            }
      }
      for(i=0;i<n;i++)
      {
            printf("maximum element in the coloumn is %d\n",i+1);
            printf("%d\n",max[i]);
      }
      return 0;
}