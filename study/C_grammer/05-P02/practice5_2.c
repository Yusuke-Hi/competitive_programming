#include <stdio.h>

void func(    )
{
	 *= 10;
}

int main(void)
{
	int i = 10;
	func(&i);
	printf("%d", i);
}
