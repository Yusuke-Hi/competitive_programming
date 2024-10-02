#include "triangle.h"

int g_count = 0;
double triangle_area(double base, double height)
{
	g_count++;
	return base * height / 2;
}