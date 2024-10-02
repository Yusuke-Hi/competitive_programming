#include <stdio.h>
#include <string.h>

int main(void) {
	char str[32] = "Hello";
	strcat_s(str, 32, " world!");
	printf("%s\n", str);
}
