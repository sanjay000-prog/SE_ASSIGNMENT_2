// 10.  Write a program of structure for five employee that provides the following 
// information -print and display empno, empname, address and age  

#include <stdio.h>
struct Employee 
{
    int empno;
    char empname[50];
    char address[100];
    int age;
};


 displayEmployee(struct Employee emp) 
{
    printf("Employee Number: %d\n", emp.empno);
    printf("Employee Name: %s\n", emp.empname);
    printf("Employee Address: %s\n", emp.address);
    printf("Employee Age: %d\n\n", emp.age);
}

 main() 
{

    struct Employee employees[5];
    
    for (int i = 0; i < 5; i++) 
	{
        printf("Enter details for Employee %d:\n", i + 1);
        
        printf("Enter employee number: ");
        scanf("%d", &employees[i].empno);

        printf("Enter employee name: ");
        scanf(" %s", employees[i].empname); 

        printf("Enter employee address: ");
        scanf(" %s", employees[i].address); 

        printf("Enter employee age: ");
        scanf("%d", &employees[i].age);

        printf("\n");
    }

   
    printf("Employee Details:\n");
    for (int i = 0; i < 5; i++) 
	{
        displayEmployee(employees[i]);
    }

    
}
