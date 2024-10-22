//6. WAP to convert years into days and days into years

#include<stdio.h>
main()
{
	float a,b,s,g;
	printf("\n\n\t Enter number of years : ");
	scanf("%f",&a);
	
	b=a*365;
	printf("\n\n\t %.2f years is approx %.2f days  ",a,b);
	
	printf("\n\n\t Enter number of days : ");
	scanf("%f",&g);
	
	s=g/365;
	printf("\n\n\t %.2f  days is approx %.2f years ",g,s);
} 
