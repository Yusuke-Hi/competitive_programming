#include <stdio.h>

void expression(int n){
    int s = n, t = n - 1;
    printf("num: %d\n", s)/
    printf("bit expression: ");
    for (int i = 7; i >= 0; i--){
        if (s / (1 << i) == 1){
            printf("1");
            s -= (1 << i);
        }else printf("0");
    }
    printf("\n");
    printf("2 complement expression: ");
    for (int i = 7; i >= 0; i--){
        if (t / (1 << i) == 1){
            printf("0");
            t -= (1 << i);
        }else printf("1");
    }
    printf("\n");
}

int main(){
    //expression(100);
    
    for (int i = 0;i < 128 ;i++){
        expression(i);
    }
    
}