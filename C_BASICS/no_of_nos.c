#include <stdio.h>
int main(void)
{
	int n, z=0, o=0, t=0;
	printf("Enter the size of the Array: ");
	scanf("%d", &n);
	int arr[n];
	printf("Enter the elements of the Array: \n");
	for(int i=0; i<n; i++)
	{
		scanf("%d", &arr[i]);
	}

	for(int i=0; i<n; i++)
	{
		if(arr[i] == 0)
			z = z + 1;
		else if(arr[i] == 1)
			o = o + 1;
		else if(arr[i] == 2)
			t = t+1;
	}

	printf("No of 0's are %d\nNo of 1's are %d\nNo of 2's are %d\n", z, o, t);

}