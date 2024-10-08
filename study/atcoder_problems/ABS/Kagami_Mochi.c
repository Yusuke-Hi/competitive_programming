#include<stdio.h>

int main(){
    int N;
    scanf("%d", &N);
    int data[N];
    for (int i = 0; i < N; i++){
        scanf("%d", &data[i]);
    }
    //bubble sort
    /*
    for (int i = 0; i < N - 1; i++){
        for (int j = N - 1; j > i; j--){
            if (data[j] > data[j - 1]){
                int tmp = data[j - 1];
                data[j - 1] = data[j];
                data[j] = tmp;
            }
        }
    }
    */
    int result = 0;
    for (int i = 0; i < N; i++){
        int count = 0;
        for (int j = i+1; j < N; j++){
            if (data[i] == data[j]){
                count++;
                break;
            }
        }
        if (count == 0){
            result++;
        }
    }
    printf("%d", result);
}