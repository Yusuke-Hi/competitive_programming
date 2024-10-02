#include <stdio.h>

void func_a(void)
{
	printf("func_a関数の内部の命令文です\n");
}

void func_b(void)
{
	printf("func_b関数の内部の命令文です\n");

}

int main(void)
{
	func_a();
	func_b();
}
