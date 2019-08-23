#include<stdio.h>
void main()
{
	int a, b, c;
	printf("enter 3 numbers ");
	scanf("%d %d %d", &a, &b, &c);
	if(a > b && a > c)
		{
			printf("Maximum is %d\n",a);
		}
	else if(b>c && b>a)
		{
			printf("Maximum is %d\n",b);
		}
	else
		{
			printf("Maximum is %d\n",c);
		}
		
}