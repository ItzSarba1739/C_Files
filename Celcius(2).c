#include<stdio.h>
#include<conio.h>
int main()
{
	float cel,far;
	printf("\n Enter the Celcius temperature: ");
	scanf("%f",&cel);
	far=((cel/5)*9)+32;
	printf("\n The Equivalent Farenhite Temperature is %.2f of the Celcius Temperature %.2f ",far,cel);
}
