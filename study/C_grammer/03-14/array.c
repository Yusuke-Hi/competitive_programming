#include <stdio.h>

int main(void)
{
	int scores[5];
	scores[0] = 50;
	scores[1] = 55;
	scores[2] = 70;
	scores[3] = 65;
	scores[4] = 80;

	for (int i = 0; i < 5; i++) {
		printf("%d\n", scores[i]);
	}
}
