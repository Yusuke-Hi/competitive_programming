#include <stdio.h>

int main(void)
{
	int score = 3;
	switch (score) {
	case 1:
		printf("もっと頑張りましょう\n");
		break;
	case 2:
		printf("もう少し頑張りましょう\n");
		break;
	case 3:
		printf("普通です\n");
		break;
	case 4:
		printf("よくできました\n");
		break;
	case 5:
		printf("大変よくできました\n");
		break;
	default:
		printf("想定されていない点数です\n");
	}
	printf("switchブロックを抜けました\n");
}
