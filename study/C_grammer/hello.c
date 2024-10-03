#include<stdio.h>
int main(void){
    int i = 5;
    int *p = &i;
    int j = *p;
    printf("i:%d\n", i);
    printf("p:%p\n", p);
    printf("*p:%d\n", *p);
    *p = 10;
    printf("i:%d, j:%d\n", i, j);
}