#include <stdio.h>

int main(void)
{
	int a[] = { 7, 5, 10 };
	int *p = a;
	p++;
	printf("%d", *p);
}
