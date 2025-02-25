#include<stdio.h>
#include<conio.h>
int main(){
	int n1,n2,add,sub,mul,mod; float div;
	printf("\n Enter the first number: ");
	scanf("%d",&n1);
	printf("\n Enter the second number: ");
	scanf("%d",&n2);
	add=n1+n2;
	sub=n1-n2;
	mul=n1*n2;
	div=(float)n1/n2;
	mod=n1%n2;
	printf("\n The Value of Addition is: %d\n Subtraction is:%d\n Multiplication is:%d\n Division is:%.2f\n Modulus is:%d",add,sub,mul,div,mod);
}
