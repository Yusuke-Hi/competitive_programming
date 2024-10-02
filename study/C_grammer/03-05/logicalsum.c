#include <stdio.h>

int main(void)
{
	int age = 20;
	if (age < 13 || age >= 65) {
		printf("入場料は無料です\n");
	} else {
		printf("料金が必要です\n");
	}
}
