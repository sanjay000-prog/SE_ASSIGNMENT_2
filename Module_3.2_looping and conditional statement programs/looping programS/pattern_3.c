#include <stdio.h>
main() 
{
    int i, j, rows=5;
 

    for (i = 1; i <= rows; i++) 
	{
        for (j = 1; j <= rows - i; j++) 
		{
            printf("  ");
        }
        for (j = 1; j <= 2 * i - 1; j++) 
		{
            printf("* ");
        }
        printf("\n");
    }
}
