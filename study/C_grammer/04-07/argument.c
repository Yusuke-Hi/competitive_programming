#include <stdio.h>

void func(int i) {
	i++;
}

int main(void)
{
	int i = 10;
	printf("(1) iの値は%d\n", i);
	func(i);
	printf("(2) iの値は%d\n", i);
}
