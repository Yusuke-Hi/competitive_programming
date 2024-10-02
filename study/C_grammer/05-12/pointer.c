#include <stdio.h>

int main(void)
{
	int scores[] = { 10, 20, 30 };
	int *p = scores;

	printf("*pの値は%d\n", *p);
	p++;
	printf("*pの値は%d\n", *p);
	p++;
	printf("*pの値は%d\n", *p);
}
