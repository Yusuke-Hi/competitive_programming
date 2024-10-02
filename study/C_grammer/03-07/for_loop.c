#include <stdio.h>

int main(void)
{
	int sum = 0;
	for (int i = 1; i <= 100; i++) {
		sum += i;
		printf("%dを加えました\n", i);
	}
	printf("合計は%dです\n", sum);
}
