#include <stdio.h>

int main(void)
{
	int a = 2;
	int b = 3;
	printf("a=%d, b=%d\n", a, b);

	int tmp = a;
	a = b;
	b = tmp;
	printf("a=%d, b=%d\n", a, b);
}
