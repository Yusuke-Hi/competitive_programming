#include <stdio.h>

int main(void)
{
	double base;
	double height;

	printf("三角形の面積を計算します\n");
	printf("底辺の長さを入力してください\n");
	scanf_s("%lf", &base);
	printf("高さを入力してください\n");
	scanf_s("%lf", &height);
	printf("面積は %f\n", base * height / 2);
}
