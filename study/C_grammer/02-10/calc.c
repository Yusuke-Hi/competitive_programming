#include <stdio.h>

int main(void)
{
	int i;
	int j;

	i = 11;
	i++;
	i /= 2;
	printf("iの値は %d\n", i);

	j = i * i;
	printf("jの値は %d\n", j);
}
