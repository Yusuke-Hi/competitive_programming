#include<stdio.h>
//#include<stdlib.h>

int main(){
    int N;
    scanf("%d", &N);
    int data[N];
    for (int i = 0; i < N; i++){
        scanf("%d", &data[i]);
    }
    //bubble sort
    for (int i = 0; i < N; i++){
        for (int j = N - 1; j > i; j--){
            if (data[j] > data[j - 1]){
                int tmp = data[j - 1];
                data[j - 1] = data[j];
                data[j] = tmp;
            }
        }
    }
    int A = 0, B = 0;
    for (int i = 0; i < N; i++){
        if (i % 2 == 0){
            A += data[i];
        }
        else{
            B += data[i];
        }
    }
    printf("%d\n", A - B);
}