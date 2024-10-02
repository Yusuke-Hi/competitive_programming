#include <stdio.h>

void func(int a)
{
	printf("func関数が呼び出されました。引数の値は%d\n", a);
}

int main(void)
{
	void (*pF)(int) = func;
	(*pF)(10);
}
