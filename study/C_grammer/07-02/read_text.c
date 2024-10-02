#include <stdio.h>

int main(void)
{
	FILE *fp = NULL;
	char line[128];

	if (fopen_s(&fp, "data/scores.txt", "r") != 0) {
		printf("ファイルを開けませんでした\n");
		return 1;
	}

	int total = 0;
	int i;
	while (fscanf_s(fp, "%d", &i) != EOF) {
		printf("%d を読み込みました\n", i);
		total += i;
	}

	printf("合計は %d\n", total);

	fclose(fp);
	return 0;
}
