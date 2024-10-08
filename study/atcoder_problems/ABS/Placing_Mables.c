#include<stdio.h>

int main(){
    char str[3];
    scanf("%s", str);
    int a = str[0] - '0', b = str[1] - '0', c = str[2] - '0';
    //printf("a:%d, b:%d, c:%d\n", a, b, c);
    printf("%d\n", a+b+c);
}