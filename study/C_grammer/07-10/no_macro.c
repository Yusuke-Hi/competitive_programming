#include <stdio.h>

int max_int(int x, int y)
{
	return x > y ? x : y;
}

double max_double(double x, double y)
{
	return x > y ? x : y;
}

int main(void)
{
	int a = 6;
	int b = 9;
	printf("%d\n", max_int(a, b));

	double c = 4.5;
	double d = 1.2;
	printf("%.1f\n", max_double(c, d));
}
