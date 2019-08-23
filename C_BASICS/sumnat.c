#include<stdio.h>
void main()
{
	int s=0;
	int i,n;
	printf("enter limit ");
	scanf("%d",&n);
	for(i=0; i<=n; i++)
		s = s + i;
	printf("sum = %d\n",s);
}
