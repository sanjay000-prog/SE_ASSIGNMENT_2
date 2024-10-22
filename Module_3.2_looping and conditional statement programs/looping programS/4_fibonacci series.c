// WAP to print Fibonacci series up to given numbers 

#include<stdio.h>
int main()
{
	int i, n, sum=0, a=0, b=1;
	printf("\n\n\t Enter any number to print fibonacci series : ");
	scanf("%d", &n);
	
	printf(" fabonacci series up to %d ", n);
	printf("\n\n \t %d \n\n\t %d", a,b);
	
	for (i=3; i<=n; i++)
	{
		sum=a+b;
		printf("\n\n\t %d ", sum);
		a=b;
		b=sum;
	}
	
}
