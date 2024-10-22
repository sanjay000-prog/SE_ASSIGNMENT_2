// 1. Write a program to find out the max number from given array using function  

#include<stdio.h>
int main()
{
	int a[50],n, max=0,i;
	
	printf("\n\t Enter the size of array :");
	scanf ("%d", &n);
	
	for (i=0;i<n;i++)
	{
		printf("\n\n\t Enter the array elements a[%d] :",i);
		scanf ("%d",&a [i]);
	}

	for (i=0;i<n;i++)
	{
		printf("\n\t Print the array elements : %d", a[i]);
	}
	
		for (i=0; i<n;i++)
		{
			if(a[i]>max)
			{
				max=a[i];
			}
		}
		
		printf("\n\n\t Maximum number : %d",max);	
}