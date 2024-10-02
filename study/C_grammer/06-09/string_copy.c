#include <stdio.h>
#include <string.h>

int main(void) {
	char str1[] = "Hello";
	char str2[16];

	strcpy_s(str2, 16, str1);
	printf("str2は %s\n", str2);
}
