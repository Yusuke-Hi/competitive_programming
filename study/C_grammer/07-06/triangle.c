#include <stdio.h>

double triangle_area(double base, double height);

int main(void)
{
	double area = triangle_area(5, 8);
	printf("面積は %.1f\n", area);
}

double triangle_area(double base, double height)
{
	return base * height / 2;
}
