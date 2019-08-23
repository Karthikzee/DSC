#include <stdio.h>
int main(void)
{
	int a[5];
	printf("Input the elements of Arrays:\n");
	for(int i = 0; i < 5; i++)
	{
		scanf("%d", &a[i]);
	}
	
	for(int i = 0; i < 5; i++)
	{
		printf("%d\n", a[i]);
	}
}