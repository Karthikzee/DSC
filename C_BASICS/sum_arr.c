#include <stdio.h>
int main(void)
{
	int n, sum=0;
	printf("Enter the size of the Array: ");
	scanf("%d", &n);
	int arr[n];
	printf("Enter the elements of the Array: \n");
	for(int i=0; i<n; i++)
	{
		scanf("%d", &arr[i]);
		sum = sum + arr[i];
	}
	printf("%d is the sum of Array.\n", sum);
}