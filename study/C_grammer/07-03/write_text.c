#include <stdio.h>

int main(void)
{
	FILE *fp;
	if (fopen_s(&fp, "output.txt", "w") != 0) {
		printf("ファイルを開けませんでした\n");
		return 1;
	}

	for (int i = 0; i < 10; i++) {
		fprintf(fp, "[%d]\n", i);
	}

	fclose(fp);

	return 0;
}
