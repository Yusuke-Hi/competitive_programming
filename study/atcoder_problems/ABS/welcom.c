#include<stdio.h>

int main(){
    int a, b, c;
    scanf("%d", &a);
    scanf("%d %d", &b, &c);
    char str[110];
    scanf("%s", &str);
    printf("%d %s\n", a + b + c, str);
}