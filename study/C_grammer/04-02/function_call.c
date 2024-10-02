#include <stdio.h>

void func(void)
{
	printf("func関数の内部の命令文です\n");
}

int main(void)
{
	printf("これからfunc関数を呼び出します\n");
	func();
	printf("func関数の呼び出しが終わりました\n");
}
