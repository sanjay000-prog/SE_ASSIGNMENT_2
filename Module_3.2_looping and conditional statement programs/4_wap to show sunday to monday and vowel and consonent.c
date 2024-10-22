/* 4.  WAP to show  
1. Monday to Sunday using switch case  
2. Vowel or Consonant using switch case  */

#include<stdio.h>
main()
{
	int a;
	char b;
	printf("\n\n\t Enter number of week (1-7) to display its name : ");
	scanf("%d",&a);
	
	switch (a)
	{
	case 1: printf("\n\n\t Monday ");
			break;
			
	case 2:	printf("\n\n\t Tuesday ");
			break;
			
	case 3: printf("\n\n\t Wednesday ");
			break;
			
	case 4: printf("\n\n\t Thursday ");
			break;
			
	case 5: printf("\n\n\t Friday ");
			break;
			
	case 6: printf("\n\n\t Saturday ");
			break;
			
	case 7: printf("\n\n\t Sunday ");
			break;
		
			
	default : printf("\n\t Invalid number please enter again (1-7) ");
	
	}

	printf("\n\n\t Enter any alphabet to display its vowel or consonent : ");
	scanf(" %c",&b);
	
	switch (b)
	{
		case 'a' : 	printf("\n\t %c is a vowel ", b);
					break;
		case 'e' : 	printf("\n\t %c is a vowel ", b);
					break;
		
		case 'i' : 	printf("\n\t %c is a vowel ", b);
					break;
		case 'o' : 	printf("\n\t %c is a vowel ", b);
					break;
		case 'u' : 	printf("\n\t %c is a vowel ", b);
					break;
			
	
	default : printf("\n\t %c is a consonent ",b);
			
			
	}

			
}
