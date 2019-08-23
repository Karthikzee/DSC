#include<stdio.h>
void main()
{
	int a,b;
	int t;
	printf("enter 2 numbers ");
	scanf("%d %d",&a ,&b);
	printf("numbers before swap %d %d",a,b);
	t=a;
	a=b;
	b=t;
	printf("\nnumbers after swap %d %d\n",a,b);

}