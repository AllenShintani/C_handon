#include <stdlib.h>
#include <stdio.h>

int main() {
    int n;
    int S;
    int i;
    printf("整数を入力してください：");
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        S = S + (i*i*i*i);
    }
    printf("S = %d\n", S);
    return 0;
}