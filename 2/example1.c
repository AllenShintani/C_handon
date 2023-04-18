#include <stdio.h>
#include <stdlib.h>

int sigma (int n) {
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += i;
    }
    return sum;
}

int main() {
    int n;
    int result;
    printf("正の整数を入力してください：");
    scanf("%d", &n);
    for (int i = 0; i < n; i++){
       result = sigma(n);
    };
 printf("%d\n", result);
 return 0;
}

