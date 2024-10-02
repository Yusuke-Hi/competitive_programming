#include<stdio.h>

int main(void)
{
	int i = 5;
	int *p = &i;

	int j = *p;
	printf("jの値は%d\n", j);
	*p = 10;
	printf("iの値は%d\n", i);
}