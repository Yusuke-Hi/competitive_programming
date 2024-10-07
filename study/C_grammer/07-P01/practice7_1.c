#include <stdio.h>

int main(void)
{
	FILE *fp_in;
	FILE *fp_out;
	char line[128];

	// 読み込み用のファイルを開く
	fp_in = fopen("../data/sample.txt", "r");
	if (fp_in == NULL) {
		printf("読み込み用のファイルを開けませんでした\n");
		return 1;
	}

	// 書き出し用のファイルを開く
	fp_out = fopen("output.txt", "w");
	if (fp_out == NULL) {
		printf("書き出し用のファイルを開けませんでした\n");
		return 1;
	}
	int i = 0;
	while (fgets(line, 128, fp_in) != NULL){
		fprintf(fp_out, "%d: %s",i+1 ,line);
		i++;
	}

	//ファイルを閉じる
	fclose(fp_in);
	fclose(fp_out);
	return 0;
}
