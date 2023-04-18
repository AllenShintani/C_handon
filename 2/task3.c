#include <stdio.h>
#include <stdlib.h>

int factorial(int n){
    int i;
    int result = 1;
    for (i = 1; i <= n; i++) {
        result = result * i;
    }
    return result;
}

int main() {
    int n;
    printf("整数を入力してください：");
    scanf("%d", &n);
    printf("%dの階乗は%dです。\n", n, factorial(n));
    return 0;
}