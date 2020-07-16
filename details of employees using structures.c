#include<stdio.h>
#include<stdlib.h>
typedef struct
{
      char name[30];
      int id;
      int salary;
}employee;
int main()
{
      int i,n=5;
      employee employees[n];
      printf("enter %d employee details\n",n);
      for(i=0;i<n;i++)
      {
            printf("employee %d:-\n",i+1);
            printf("name:");
            scanf("%s\n",&employees[i].name);
            printf("id:");
            scanf("%d\n",&employees[i].id);
            printf("salary:");
            scanf("%d\n",&employees[i].salary);
            printf("\n");
      }
      printf("all employees details\n");
      printf("name\tid\tsalary\n");
      for(i=0;i<n;i++)
      {
            printf("%s\t\t%d\t\t%d\t\t\n",employees[i].name,emloyees[i].id,employees[i].salary);
      }
      
}