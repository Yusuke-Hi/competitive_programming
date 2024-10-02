#include <stdio.h>

int main(void)
{
	FILE *fp_in;
	FILE *fp_out;
	char line[128];

	// 読み込み用のファイルを開く
	if (fopen_s(&fp_in, "data/sample.txt", "r") != 0) {
		printf("読み込み用のファイルを開けませんでした\n");
		return 1;
	}

	// 書き出し用のファイルを開く
	if (fopen_s(&fp_out, "output.txt", "w") != 0) {
		printf("書き出し用のファイルを開けませんでした\n");
		return 1;
	}

	//ファイルを閉じる
	fclose(fp_in);
	fclose(fp_out);
	return 0;
}
