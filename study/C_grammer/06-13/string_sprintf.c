#include <stdio.h>

int main(void)
{
	char str[32];
	char name[] = "Taro";
	sprintf_s(str, 32, "Hello %s!", name);
	printf("%s\n", str);
}
