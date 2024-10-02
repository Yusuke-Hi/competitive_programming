#include <stdio.h>

int main(void)
{
	int i;
	printf("整数を入力してください\n");
	scanf_s("%d", &i);
	printf("%dが入力されました\n", i);
}
