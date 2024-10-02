#include <stdio.h>

void countdown(int start)
{
	printf("関数が受け取った値：%d\n", start);
	printf("カウントダウンをします\n");
	for (int i = start; i >= 0; i--) {
		printf("%d\n", i);
	}
}

int main(void)
{
	countdown(3);
	countdown(10);
}
