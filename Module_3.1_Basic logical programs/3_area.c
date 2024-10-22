//3. WAP to find area of circle, rectangle and triangle  

 #include<stdio.h>
main()
{
	float pi=3.14,areaofrectangle,a=0.5, area;
	int r =3,b= 2, h=3,w=3,l=4;
	area = a*b*h;
	areaofrectangle = w*l;
	
	printf ("\n\n\n\t area of circle = %.2f",pi*r*r);

	printf("\n\n\t area of rectangle = %d",areaofrectangle);

	
	printf("\n\n\t area of triangle = %.2f",area);
	
}
