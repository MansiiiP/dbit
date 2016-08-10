#include<stdio.h>

int main()
{
	int a,b;
	printf("Enter two numbers - ");
	scanf("%d%d",&a,&b);
	c=a;
	printf("Sum of %d and %d is :",a,b);
	a += b;
	printf("%d\n",a);
	c-=b;
	printf("Difference : %d",c);
	return 0;
}
