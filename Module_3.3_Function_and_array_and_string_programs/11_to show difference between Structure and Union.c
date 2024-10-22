/* 11. WAP to show difference between Structure and Union. 

Structures in C is a user-defined data type available in C that allows to combining of data items
of different kinds. Structures are used to represent a record.

Union in C that allows storing different data types in the same memory location. */



#include<stdio.h>
#include<string.h>
struct employee
{
	int eid;
	int salary;
	char ename[40];
	
}s;
union employees
{
	char description[40];
	
}G;

int main()
{
	printf("\n\n\t Enter Employee Number : ");
	scanf("%d",&s.eid);
	
	printf("\n\n\t Enter Employee Name : ");
	scanf("%s",&s.ename);
	
	printf("\n\n\t Enter Employee Salary : ");
	scanf("%d",&s.salary);
	
	printf("\n\n\t Enter Employee Description : ");
	getchar();
	fgets(G.description,100,stdin);
	
	printf("\n\n\t Employee Number is : %d",s.eid);
	printf("\n\n\t Employee Name is : %s",s.ename);
	printf("\n\n\t Employee Salary is : %d",s.salary);
	printf("\n\n\t Employee Description is : %s",G.description);
	
}