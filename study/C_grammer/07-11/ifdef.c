#include <stdio.h>
#define ADDRESS_CHECK

int main(void)
{
	int a = 9;
#ifdef ADDRESS_CHECK
	printf("aのアドレスは%p\n", &a);
#endif
	printf("aの値は%d\n", a);
}
