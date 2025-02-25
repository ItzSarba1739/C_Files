#include<stdio.h>
#include<conio.h>
int main()
{
	float len, wid, ar, per;
	printf("\n Enter the value of Length: ");
	scanf("%f",&len);
	printf("\n Enter the value of Width: ");
	scanf("%f",&wid);
	per=(len+wid)*2;
	ar=len*wid;
	printf(" The Perimeter of the rectangle is: %.2f \n The area of the rectangle is: %.2f \n of Length: %.2f and Width: %.2f",per,ar,len,wid);
}
