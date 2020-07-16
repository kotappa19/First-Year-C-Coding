#include<stdio.h>
struct student
{
      char firstname[30];
      int roll;
      int marks;
}s[10];
int main()
{
      int i;
      employee employees[n];
      printf("enter information of students\n");
      for(i=0;i<5;i++)
      {
            s[i].roll=i+1;
            printf("for roll number%d\n",s[i].roll);
            printf("enter first name:");
            scanf("%s\n",&s[i].firstname);
            printf("\n");
            printf("enter marks:");
            scanf("%f\n",&s[i].marks);
      }
      printf("\n");
      printf("displaying information\n");
      printf("rollnumber\tname\tmarks\n");
      for(i=0;i<5;i++)
      {
            printf("%s\t\t%d\t\t%f\t\t\n",s[i].roll,s[i].firstname,s[i].marks);
      }
      
}