#include <stdio.h>

int main(void)
{
	int i = 4;
	int j = 5;
	j *= i;
	int k = j;
	k /= 2;
	printf("%d\n", k);
}
