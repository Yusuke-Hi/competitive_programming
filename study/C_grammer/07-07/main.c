#include <stdio.h>
#include "triangle.h"

int main(void)
{
	double area = triangle_area(5, 8);
	printf("面積は %.1f\n", area);
}