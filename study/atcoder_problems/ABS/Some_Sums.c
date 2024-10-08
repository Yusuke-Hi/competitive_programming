#include<stdio.h>
#include<string.h>
int main(){
    int N, A, B;

    scanf("%d %d %d", &N, &A, &B);
    //printf("%s, %d, %d", N, A, B);

    int result = 0;
    for (int i = 1; i < N + 1; i++){
        int key = 0;
        char str[20];
        sprintf(str, "%d", i);
        //printf("i:%d", i);
        for (int j = 0; j < strlen(str); j++){
            key += str[j] - '0';
            //printf(", %d\n", str[j] - '0');
        }
        //printf("key:%d\n", key);
        if (A <= key && key <=B){
            //printf("i:%d", i);
            result += i;
        }
    }
    printf("%d\n", result);
    
}