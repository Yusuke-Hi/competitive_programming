#include <stdio.h>

typedef struct Person
{
	char name[16];
	int age;
	struct Person *mother;
} Person;

int main(void)
{
	Person p0 = { "SUZUKI AKIKO", 44, NULL };
	Person p1 = { "SUZUKI TARO", 17, &p0 };

	printf("%s の母親は %s\n", p1.name, p1.mother->name);
}
