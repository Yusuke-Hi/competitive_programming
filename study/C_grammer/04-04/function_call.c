#include <stdio.h>

void func_a(void)
{
	printf("func_a関数が呼び出されました\n");
}

void func_b(void)
{
	printf("func_b関数が呼び出されました\n");
	printf("func_a関数を呼び出します\n");
	func_a();
	printf("func_a関数の呼び出しが終わりました\n");
}

int main(void)
{
	printf("func_b関数を呼び出します\n");
	func_b();
	printf("func_b関数の呼び出しが終わりました\n");
}
