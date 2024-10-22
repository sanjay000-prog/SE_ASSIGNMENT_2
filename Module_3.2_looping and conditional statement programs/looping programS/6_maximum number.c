// Write a program to find out the max from given number (E.g., No: -1562 
// Max number is 6)   

#include<stdio.h>
main()
{
    int number, maxDigit = 0;
  
    printf("\n\n\t Enter a number: ");
    scanf("%d", &number);
    

    if (number < 0)
	 {
        number = -number;
    }

   
    while (number != 0) 
	{
        int digit = number % 10;
        if (digit > maxDigit) 
		{
            maxDigit = digit;
        }
        number=number/ 10;
    }
    printf("\n\n\t Max digit: %d\n", maxDigit);
}

