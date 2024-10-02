#include <stdio.h>

int main(void)
{
	for (int a = 1; a <= 3; a++) {
		printf("a = %d\n", a);
		for (int b = 1; b <= 3; b++) {
			printf("   b = %d\n", b);
		}
	}
}
