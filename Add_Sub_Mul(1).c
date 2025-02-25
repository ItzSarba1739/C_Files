#include<stdio.h>
#include<conio.h>
int main()
{
	 float sum,sub,div,multi; int a,b,rem;
	printf("\n\t Enter the First Number: ");
	scanf("%d",&a);
	printf("\n\t Enter the Second Number: ");
	scanf("%d",&b);
	sum= a+b;
	printf("\n\t The Addition of %d and %d is %.2f",a,b,sum);
	sub= a-b;
	printf("\n\t The Subtraction of %d from %d is %.2f",b,a,sub);
	multi= a*b;
	printf("\n\t The Multiplication of %d and %d is %.2f",a,b,multi);
	div= a/b;
	rem= a % b;
	printf("\n\t The Division of %d from %d is %.2f and Reminder is %d",b,a,div,rem);
}
