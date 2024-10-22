#include <stdio.h>
main() 
{
    float principal, rate, time, simple_interest;

    printf("\n\n\t Enter principal amount: ");
    scanf("%f", &principal);

    printf("\n\n\t Enter rate of interest (in %%): ");
    scanf("%f", &rate);

    printf("\n\n\t Enter time (in years): ");
    scanf("%f", &time);

    simple_interest = (principal * rate * time) / 100;
    
    printf("\n\n\t Simple Interest = %.2f\n", simple_interest);

}
