#include <stdio.h>

int largest(int i, int j, int k);

int main(void)
{
	int i, j, k, res;
	printf("Enter three numbers to find largest: ");
	scanf("%d%d%d", &i, &j, &k);
	res = largest(i, j, k);
	printf("%d is the largest number among %d, %d and %d\n", res, i, j, k);
}

int largest(int i, int j, int k)
{
	if(i>j && i>k)
	{
		return i;
	}
	else if(j>k)
	{
		return j;
	}
	else
	{
		return k;
	}
}
