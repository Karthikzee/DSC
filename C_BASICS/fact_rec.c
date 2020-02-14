#include <stdio.h>

int fact(int n);

int main(void)
{
	int n, factorial;
	do
	{
		printf("Enter number to find factorial: ");
		scanf("%d", &n);
	}
	while(n < 0);
	{
		factorial = fact(n);
		printf("The Factorial of %d is %d\n", n, factorial);
	}
}

int fact(int n)
{
	int num = 1;
	if(n == 0)
	{
		return 1;
	}
	else
	{
		num = n * fact(n - 1);
	}
	return num;
}