// 3.  WAP to find reverse of string using recursion 

#include <stdio.h>
int factorial(int n) 
{
    if (n == 0 || n == 1)
        return 1;  // Base case: factorial of 0 or 1 is 1
    else
        return n * factorial(n - 1);  
}

int main() 
{
    int num;
    printf("\n\n\t Enter a number: ");
    scanf("%d", &num);
    printf("\n\n\t Factorial of %d is %d\n", num, factorial(num));

    return 0;
}

