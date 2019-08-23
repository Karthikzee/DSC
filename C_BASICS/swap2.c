#include<stdio.h>
void main()
{
	int a,b;
	printf("enter 2 numbers ");
	scanf("%d %d",&a ,&b);
	printf("numbers before swap %d %d",a,b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("\nnumbers after swap %d %d\n",a,b);

}