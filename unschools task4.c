#include<stdio.h>
#include<string.h>
struct employee
{
    int id,experience,salary;
    char name[25];
}emp[100];
 
int main()
{
    int i,n;
    printf("Enter the no of Employees:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("\nenter details of Employee %d \n",i+1);
        printf("\nEnter Employee %d details in form of id , name , experience , salary:\n",i+1);
        scanf("\n%d %s %d %d",&emp[i].id,emp[i].name,&emp[i].experience,&emp[i].salary);
    }
    
    printf("\nDetails of %d Employees are:\n",n);
    printf("\nEmployee ID:\tEmployee name:\tEmployee experience:\tEmployee salary:\n");
    for(i=0;i<n;i++)
    {
        printf("\n  %d\t\t    %s\t\t   %d\t\t           %d\t\t\n",emp[i].id,emp[i].name,emp[i].experience,emp[i].salary);
    }
}
