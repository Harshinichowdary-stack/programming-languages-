#include<stdio.h>
#include<string.h
struct employee
{
    int id,experience,salary;
    char name[25];
}emp[100];
 
int main()
{
    int i,n;
    printf("Enter the no of Employees:\n");
    scanf("%d",&n);
    printf("Enter Employee details in form of id , name , experience , salary:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d %s %d %d",&emp[i].id,emp[i].name,&emp[i].experience,&emp[i].salary);
    }
    printf("\nEmployee ID:\tEmployee name:\tEmployee experience:\tEmployee salary:\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t\t%s\t\t%d\t\t\t%d\n",emp[i].id,emp[i].name,emp[i].experience,emp[i].salary);
    }
}
