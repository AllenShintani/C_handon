#include <stdio.h>
#include <stdlib.h>

double power(double x, int n) {
    double result = 1.0;
    int i;

    if (n < 0) {
        n = -n;
        x = 1.0 / x;
    }

    for (i = 0; i < n; ++i) {
        result *= x;
    }

    return result;
}

int main() {
    double x;
    int n;
    printf("xのn乗を計算します。xを入力してください：");
    scanf("%lf", &x);
    printf("nを入力してください：");
    scanf("%d", &n);
    printf("xのn乗は%fです。)", power(x, n));
    return 0;
}