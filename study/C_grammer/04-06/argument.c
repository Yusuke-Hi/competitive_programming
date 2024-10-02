#include <stdio.h>

void countdown(int start, int end)
{
	printf("1つ目の引数で受け取った値：%d\n", start);
	printf("2つ目の引数で受け取った値：%d\n", end);
	printf("カウントダウンをします\n");
	for (int i = start; i >= end; i--) {
		printf("%d\n", i);
	}
}

int main(void)
{
	countdown(7, 3);
}
