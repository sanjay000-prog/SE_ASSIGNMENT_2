#include<stdio.h>
main() 
{
    int n=5, i, j;
    char alphabet = 'A';

 

    for (i = 1; i <= n; i++) 
	{
        for (j = 1; j <= i; j++) 
		{
            printf("%c ", alphabet);
            alphabet++;
           
        }
        printf("\n");
    }
}

