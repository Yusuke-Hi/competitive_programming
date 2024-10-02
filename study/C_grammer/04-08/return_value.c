#include <stdio.h>

double circle_area(double r)
{
	return r * r * 3.14159;
}

int main(void)
{
	double d = circle_area(2.5);
	printf("半径2.5の円の面積は %.2f\n", d);
}
