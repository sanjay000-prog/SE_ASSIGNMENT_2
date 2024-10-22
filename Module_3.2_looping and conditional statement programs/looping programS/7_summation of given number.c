// Write a program make a summation of given number (E.g., 1523 Ans: -11) 
 
#include <stdio.h>
int main() 
{
    int num, sum = 0, remainder;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num != 0) 
	{
        remainder = num % 10;  // Extract the last digit
        sum= sum+remainder;      // Add the digit to the sum
        num= num/10;             // Remove the last digit from the number
    }
    printf("Sum of the digits = %d\n", sum);

    return 0;
}
