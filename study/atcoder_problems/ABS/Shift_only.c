#include<stdio.h>
#include<stdbool.h>

int main(){
    int N;
    scanf("%d", &N);
    int data[N];
    for (int i = 0; i < N; i++){
        scanf("%d", &data[i]);
        //printf("%d\n", data[i]);
    }
    int result, count;
    for (int i = 0; i < N; i++){
        count = 0;
        while (true){
            if (data[i] % 2 == 0){
                count++;
                data[i] /= 2;
            }
            else{
                break;
            }
        }
        if (i == 0){
            result = count;
        }
        if (result > count){
            result = count;
        }
    }
    printf("%d\n", result);
}