//  Write a program you have to make a summation of first and last Digit. (E.g., 
// 1234 Ans: -5)

#include<stdio.h>
main() 
{
    int number, firstDigit, lastDigit, sum = 0;
    printf("\n\n\t Enter a number: ");
    scanf("%d", &number);

    if (number < 0) 
	{
        number = -number;
    }
    lastDigit = number % 10;

    while (number >= 10) 
	{
        number= number/10;
    }
    firstDigit = number;
    sum = firstDigit + lastDigit;

    printf("\n\n\t Sum of the first and last digit: %d\n", sum);
}

