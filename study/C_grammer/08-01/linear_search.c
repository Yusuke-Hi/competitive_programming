#include <stdio.h>

#define DATA_NUM 10
int data[] = { 1, 7, 11, 12, 33, 57, 63, 72, 89, 99 };

int main(void)
{
	int target = 57;
	for (int i = 0; i < DATA_NUM; i++) {
		if (data[i] == target) {
			printf("値 %d は data[%d] に見つかりました\n", target, i);
			return 0;
		}
	}

	printf("値 %d は見つかりませんでした\n", target);
}
