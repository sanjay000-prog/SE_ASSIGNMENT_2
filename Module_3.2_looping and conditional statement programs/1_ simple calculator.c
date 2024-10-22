/* 1. WAP to make simple calculator (operation include Addition, Subtraction, 
Multiplication, Division, modulo) */

#include<stdio.h>
main()
{
	int a,b,z,q;
	printf("\n\n\t Press 1 for Addition : ");
	printf("\n\n\t Press 2 for Subtraction : ");
	printf("\n\n\t Press 3 for Multiplication : ");
	printf("\n\n\t Press 4 for Division : ");
	printf("\n\n\t Press 5 for Modulo : ");
	
	printf("\n\n\t Enter choice from (1-5) : ");
	scanf("%d",&a);
	
	printf("\n\n\t Enter 1st digit : ");
	scanf("%d",&z);
	printf("\n\n\t Enter 2nd digit : ");
	scanf("%d",&q);
	
	
	if (a==1)
	printf("\n\n\t Addition of %d and %d is = %d ",z,q, z+q);
	
	else if (a==2)
	printf("\n\n\t Subtraction of %d and %d is = %d ",z,q, z-q);
	
	else if (a==3)
	printf("\n\n\t Multiplication of %d and %d is = %d ",z,q, z*q);
	
	else if (a==4)
	printf("\n\n\t Division of %d and %d is = %d ",z,q, z/q);
	
	else if (a=5)
	printf("\n\n\t Modulo of %d and %d is = %d ",z,q, z%q);
	
	else 
	printf("\n\n\t Invalid choice ( enter again )");
	
}
