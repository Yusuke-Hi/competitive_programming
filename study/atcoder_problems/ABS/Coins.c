#include<stdio.h>

int main(){
    int A, B, C, X;
    scanf("%d\n%d\n%d\n%d", &A, &B, &C, &X);
    //printf("%d, %d, %d, %d", A, B, C, X);
    int count = 0;
    for (int a = 0; a < A+1; a++){
        for (int b = 0; b < B+1; b++){
            for (int c = 0; c < C+1; c++){
                if (500*a + 100*b + 50*c == X){
                    count++;
                }
            }
        }
    }
    printf("%d\n", count);
}