#include<stdio.h>

void func1(int a);
void func2();

int main(void)
{
	func1(10);
	func2();
}

void func1(int a)
{
	printf("func1が呼び出されました\n");
	printf("引数の値は%d\n", a);
}

void func2()
{
	printf("func2が呼び出されました\n");
}
