#include<stdio.h>
int main()
{
    int a[10][10],b[10][10],i,j,r,c;
    printf("Enter the number of rows & cols:");
    scanf("%d%d",&r,&c);
    printf("\nEnter array elements:");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("\nElements of the matrix are:\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d\n",&a[i][j]);
        }
    }
    printf("Transpose of the Matrix is:\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            b[i][j]=a[j][i];
            printf("%d\t",&a[j][i]);
        }
        printf("\n");
    }
}