#include <stdio.h>

int main(void)
{
	int sum1 = 0;
	for (int i = 10; i < 21; i++){
		sum1 += i;
	}
	printf("%d\n", sum1);

	int sum2 = 0;
	int j = 10;
	while(j < 21){
		sum2 += j;
		j++;
	}
	printf("%d\n", sum2);
}
