#include <stdio.h>

int main(void)
{
	char str[32];
	printf("名前を入力してください\n");
	scanf_s("%s", str, 32);
	printf("%sさん、こんにちは\n", str);
}
