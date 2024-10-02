#include <stdio.h>

int main(void)
{
	int sum = 0;
	for (int i = 1; i <= 10; i++) {
		sum += i;
		printf("変数sumに%dを加えました。", i);
		printf("sumは%d\n", sum);
		if (sum > 20) {
			printf("合計が20を超えました。\n");
			break;
		}
	}
}
