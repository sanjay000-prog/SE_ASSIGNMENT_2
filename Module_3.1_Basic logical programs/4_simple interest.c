// 4. WAP to find simple interest  

#include<stdio.h>
main()
{
	float p,r,t,si;
	printf("\n\n\t Enter principal amount : ");
	scanf("%f",&p);
	printf("\n\n\t Enter Rate(in percentage) : ");
	scanf("%f",&r);
	printf("\n\n\t Enter Time(in years) : ");
	scanf("%f",&r);
	
	si=(p*r*t)/100;
	printf("\n\n\t Simple Interest : %.2f",si);
}
