#include <stdio.h>
#include <string.h>

int main(void) {
	char str1[] = "Hello";
	char str2[] = "HELLO";

	if (strcmp(str1, str2) == 0) {
		printf("同じです\n");
	} else {
		printf("違います\n");
	}
}
