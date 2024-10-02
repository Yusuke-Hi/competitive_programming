#include <stdio.h>

int a = 10;

void func(void) 
{
	printf("%d\n", a);
	int a = 0;
	a++;
	printf("%d\n", a);
}

int main(void)
{
	func();
	printf("%d\n", a);
}
