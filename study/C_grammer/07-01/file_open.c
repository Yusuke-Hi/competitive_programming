#include <stdio.h>

int main(void)
{
	FILE *fp = NULL;
	char line[128];

	if (fopen_s(&fp, "data/sample.txt", "r") != 0) {
		printf("ファイルを開けませんでした\n");
		return 1;
	}

	while (fgets(line, 128, fp) != NULL) {
		printf(">>> %s", line);
	}

	fclose(fp);
	return 0;
}
