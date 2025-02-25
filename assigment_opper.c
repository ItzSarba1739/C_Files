#include<stdio.h>
#include<conio.h>
int main(){
	int a,b;
	printf("\n Enter the two numbers: ");
	scanf("%d%d",&a,&b);
	a=b;
	printf("1.%d\n",a);
	a+=b;
	printf("2.%d\n",a);
	a-=b;
	printf("3.%d\n",a);
	a*=b;
	printf("3.%d\n",a);
	a/=b;
	printf("4.%d\n",a);
	a%=b;
	printf("5.%d",a);
}
