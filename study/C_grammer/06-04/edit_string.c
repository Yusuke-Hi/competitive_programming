#include <stdio.h>
#include <string.h>

int main(void)
{
	char str[] = "dog";
	char *s = str;

	s[0] = 'b';
	s[1] = 'i';
	printf("%s", str);
}
