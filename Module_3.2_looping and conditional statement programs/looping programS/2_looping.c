/* loop 2. WAP to take 10 no. Input from user and find out …   
3. How many Even numbers are there  
4. How many odd numbers are there  
5. Sum of even numbers   
6. Sum of odd numbers */

#include <stdio.h>
main() 
{
    int numbers[10];
    int even_count = 0, odd_count = 0;
    int even_sum = 0, odd_sum = 0;

  
    printf("\n\n\t Enter 10 numbers:");
    for (int i = 0; i < 10; i++) 
	{
        scanf("%d", &numbers[i]);
        if (numbers[i] % 2 == 0) 
		{
            even_count++;
            even_sum += numbers[i];
        } else
		 {
            odd_count++;
            odd_sum += numbers[i];
        }
    }

    printf("\n\n\t Total Even numbers: %d ", even_count);
    printf("\n\n\t Total Odd numbers: %d ", odd_count);
    printf("\n\n\t Sum of Even numbers: %d ", even_sum);
    printf("\n\n\t Sum of Odd numbers: %d", odd_sum);

   
}
