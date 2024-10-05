#include <stdio.h>

int main(void)
{
	char strs[3][5] = { "dog", "cat", "bird" };

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 5; j++){
			printf("%c\n", strs[i][j]);
		}
	}
}
