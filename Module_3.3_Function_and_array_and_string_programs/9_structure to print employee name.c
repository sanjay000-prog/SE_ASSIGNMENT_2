// 9. Write a program of structure employee that provides the following 
// information -print and display empno, empname, address and age  

#include <stdio.h>
struct Employee 
{
    int empno;
    char empname[50];
    char address[100];
    int age;
};


main() 
{
    
    struct Employee emp;

    printf("Enter employee number: ");
    scanf("%d", &emp.empno);

    printf("Enter employee name: ");
    scanf(" %s", emp.empname); // 

    printf("Enter employee address: ");
    scanf(" %s", emp.address); // 

    printf("Enter employee age: ");
    scanf("%d", &emp.age);

    
    printf("\nEmployee Details:\n");
     printf("Employee Number: %d\n", emp.empno);
    printf("Employee Name: %s\n", emp.empname);
    printf("Employee Address: %s\n", emp.address);
    printf("Employee Age: %d\n", emp.age);

    
}

