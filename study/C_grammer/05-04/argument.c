#include <stdio.h>

void func(int i)
{
	i += 5;
	printf("func関数内のiの値は%d\n", i);
}

int main(void)
{
	int i = 5;
	printf("func関数を呼び出す前のiの値は%d\n", i);
	func(i);
	printf("func関数を呼び出した後のiの値は%d\n", i);
}
