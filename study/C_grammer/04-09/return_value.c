#include <stdio.h>

int is_positive_number(double d)
{
	if (d > 0) {
		return 1;
	} else {
		return 0;
	}
}

int main(void)
{
	double d = -1.5;
	if (is_positive_number(d) == 1) {
		printf("dの値は正です\n");
	} else {
		printf("dの値は正ではありません\n");
	}
}

