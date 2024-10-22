// 2. WAP to swap two numbers without using third variable
#include<stdio.h>
main()
{
	int a,b;
	printf("\n\n\t Enter number 1 : ");
	scanf("%d",&a);
	printf("\n\n\t Enter number 2 : ");
	scanf("%d",&b);
	
	a=a+b;
	b=a-b;
	a=a-b;
	 printf("\n\n\t After swapping :  %d \n\n\t\t\t %d",a,b);
}   
