#include <stdio.h>
#include <string.h>

int main(void)
{
	char str[4];
	str[0] = 'd';
	str[1] = 'o';
	str[2] = 'g';
	str[3] = '\0';

	printf("犬は英語で %s\n", str);
}
