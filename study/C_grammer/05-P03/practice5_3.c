#include <stdio.h>

int get_max(int *a, int n)
{
	int max = 0;
	for (int i = 0; i < n; i++){
		if (a[i] > max){
			max = a[i];
		}
	}
	return max;
}

int main(void)
{
	int a[] = { 52, 98, 37, 88 };
	printf("配列aの要素の最大値は%d\n", get_max(a, 4));

	int b[] = { 22, 30, 91 };
	printf("配列bの要素の最大値は%d\n", get_max(b, 3));
}
