#include<stdio.h>
#include<stdbool.h>

int main(){
    int N, Y;
    scanf("%d %d", &N, &Y);
    int found = 0;
    for (int i = N; i >= 0; i--){
        for (int j = N; j >= 0; j--){
            int k = N - (i + j);
            if (i*10000 + j*5000 + k*1000 == Y && k >= 0){
                printf("%d %d %d", i, j, k);
                found = 1;
                break;
            }
        }
        if (found == 1){
            break;
        }
    }
    if (found == 0){
        printf("-1 -1 -1\n");
    }
}