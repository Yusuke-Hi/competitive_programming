#include <stdio.h>

#define MAX(x, y) (x > y ? x : y)

int main(void)
{
	int a = 6;
	int b = 9;
	printf("%d\n", MAX(a, b));

	double c = 4.5;
	double d = 1.2;
	printf("%.1f\n", MAX(c, d));
}
