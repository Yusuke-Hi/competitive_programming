#include <stdio.h>
#define TEST

int main(void)
{
	int a = 10;
#ifdef TEST
	a++;
#else
	a--;
#endif
	printf("%d\n", a);
}
