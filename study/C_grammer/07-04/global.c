#include <stdio.h>

int a = 10;

void func(void) 
{
	a++;
}

int main(void)
{
	func();
	printf("%d\n", a);
}
