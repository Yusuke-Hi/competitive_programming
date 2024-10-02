#include <stdio.h>

int main(void)
{
	int age = 20;
	if (age < 4) {
		printf("入場料は無料です\n");
	} else if (age < 13) {
		printf("子供料金で入場できます\n");
	} else {
		printf("大人料金が必要です\n");
	}
}
