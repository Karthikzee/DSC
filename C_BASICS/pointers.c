#include <stdio.h>
int main(void)
{
	int *p, a = 2;
	p = &a;
	printf("%d\n", *p);
	printf("%p\n", p);
}