#include <stdio.h>
#include <string.h>

int main(void)
{
	char str[4];
	strcpy_s(str, 4, "dog");
	printf("文字列strは %s\n", str);
	strcpy_s(str, 4, "cat");
	printf("文字列strは %s\n", str);
}
