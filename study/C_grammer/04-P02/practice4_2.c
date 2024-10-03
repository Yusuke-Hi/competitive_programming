#include <stdio.h>

// ここに各設問の関数を追加する
double rectangle_area(double width, double height){
	return width * height;
}
int main(void)
{
	// 追加した関数を呼び出し、戻り値がある場合には出力する
	printf("%f", rectangle_area(4, 3));



}
