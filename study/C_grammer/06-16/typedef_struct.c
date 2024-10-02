#include <stdio.h>

typedef struct Person
{
	char name[16];
	int age;
} Person;

int main(void)
{
	Person a = { "SUZUKI TARO", 17 };
	Person b = { "SATO HANAKO", 19 };

	printf("名前:%s, 年齢:%d\n", a.name, a.age);
	printf("名前:%s, 年齢:%d\n", b.name, b.age);
}
