#include<stdio.h>
void main()
{
	int a,b;
	int s,d,p,m;
	printf("enter 2 numbers ");
	scanf("%d%d",&a ,&b);
	s=a+b;
	d=a-b;
	p=a*b;
	m=a/b;
	printf("Sum = %d",s);
	printf("Subtraction = %d",d);
	printf("Product = %d",p);
	printf("Division = %d\n",m);
}