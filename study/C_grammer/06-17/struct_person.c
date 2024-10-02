#include <stdio.h>

typedef struct Person
{
	char name[16];
	int age;
} Person;

void print_info(Person p)
{
	printf("名前:%s, 年齢:%d\n", p.name, p.age);
}

void birthday(Person *p)
{
	(*p).age++;
}

int main(void)
{
	Person p = { "SUZUKI TARO", 17 };

	print_info(p);
	birthday(&p);
	print_info(p);
}
