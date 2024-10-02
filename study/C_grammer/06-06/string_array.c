#include <stdio.h>

int main(void)
{
	char strs[3][5] = { "dog", "cat", "bird" };

	for (int i = 0; i < 3; i++) {
		printf("%s\n", strs[i]);
	}
}
