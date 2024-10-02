#include <stdio.h>

void countdown(void)
{
	printf("カウントダウンをします\n");
	for (int i = 5; i >= 0; i--) {
		printf("%d\n", i);
	}
}

int main(void)
{
	countdown();
}
