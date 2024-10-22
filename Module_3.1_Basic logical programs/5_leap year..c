// 5. WAP to check if the given year is a leap year or not.

#include<stdio.h>
main()

{
	int years;
	
	printf("\n\n\t Enter a year : ");
	scanf("%d",&years);
	
	if(years%4==0)
	{
		printf("\n\n\t %d is a leap year. ",years);	
	}
	else
	{
		printf("\n\n\t %d is not a leap year. ",years);
	}
}