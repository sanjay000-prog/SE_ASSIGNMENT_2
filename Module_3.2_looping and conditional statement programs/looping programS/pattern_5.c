#include<stdio.h>
main()
{
	int r, c, n=5,q=1;
	for(r=1;r<=n;r++)
	{
		for (c=1;c<=r;c++)
		{
			
			printf("%d ",q);
			q++;
		}
		printf("\n");
	}
}
