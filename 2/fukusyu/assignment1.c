#include <stdio.h>

int func(int n, int digits) {


    if (n < 10) {
        printf("%d\n",digits);
    }
    else {
        digits++;
        func(n/10, digits);
    }
    return 0;
}

int main() {
       int n;
       scanf("%d", &n);
       int digits = 1;
        func(n,digits);

    return 0;
}
