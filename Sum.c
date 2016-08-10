#include<stdio.h>

int main()
{
	int a,b;
	printf("Enter two numbers - ");
	scanf("%d%d",&a,&b);
	printf("Sum of %d and %d is :",a,b);
	a += b;
	printf("%d\n",a);
	
}
