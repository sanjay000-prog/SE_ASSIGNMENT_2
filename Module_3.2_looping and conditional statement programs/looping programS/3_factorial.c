// WAP to print factorial of given number  .

#include<stdio.h>
int main()
{
	int a, i=1, sum=1;
	
	printf("\n\n\t Enter any number to print factorial number : ");
	scanf(" %d", &a);
	
	while(i<=a)
	{
		printf("\n\n\t %d ",i);
		sum=sum*i;
		i++;
	}
	printf("\n\n\t Sum : %d ", sum);
	
	return 0;
}
