// WAP to print number in reverse order e.g.: number = 64728 ---> reverse = 
// 82746  

#include <stdio.h>
main() 
{
    int number, reversedNumber = 0;

    printf("\n\n\t Enter a number: ");
    scanf("%d", &number);

    
    while (number != 0)
	 {
        int digit = number % 10;
        reversedNumber = reversedNumber * 10 + digit;
        number /= 10;
    }

   
    printf("\n\n\t Reversed number: %d", reversedNumber);

    
}

