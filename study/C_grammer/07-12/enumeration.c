#include <stdio.h>

enum Size { S, M, L, XL };

int main(void)
{
	enum Size s = XL;
	printf("sの値は%d\n", s);

	switch (s) {
	case S:
		printf("小さいサイズです\n");
		break;
	case M:
		printf("普通サイズです\n");
		break;
	case L:
		printf("大きいサイズです\n");
		break;
	case XL:
		printf("特大サイズです\n");
		break;
	}
}
