# include <stdio.h>

int fib(int n) {
    if (n <= 1) {
        return n;
    }
    return fib(n - 1) + fib(n - 2);
}

int main() {
    int n;
    printf("nを入力してください\n");
    scanf("%d", &n);
    printf("fib(%d) = %d\n", n, fib(n));
    return 0;
}