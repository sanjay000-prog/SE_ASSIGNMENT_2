//  WAP Find out length of string without using inbuilt function  

#include<stdio.h>
#include<string.h>

main()
{
	char str[50];
	int i, length;
	
	printf("\n\n\t Enter the string : ");
	fgets(str, 50 , stdin);
	str[strlen(str)-1]='\0';
	
	length=0;
	for (i=0; str[i]!='\0';i++)
	{
		length++;
	}
	printf("\n\n\t Length of the string : %d", length);
}
