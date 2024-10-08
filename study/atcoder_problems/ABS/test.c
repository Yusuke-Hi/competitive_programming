#include<stdio.h>
#include<string.h>

int main(){
    int i;
    scanf("%d", &i);
    char str[5];
    sprintf(str, "%d", i);
    int result = 0;
    for (int j = 0; j < strlen(str); j ++){
        result += str[j] - '0';
        printf("%c", str[j]);
    }
    printf("%d\n", result);

}