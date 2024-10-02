#include <stdio.h>

void func(int *p)
{
	*p = 100;
	printf("*pの値は%d\n", *p);
}

int main(void)
{
	int i = 5;
	printf("func関数を呼び出す前のiの値は%d\n", i);
	func(&i);
	printf("func関数を呼び出した後のiの値は%d\n", i);
}
