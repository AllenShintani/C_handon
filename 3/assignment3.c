#include <stdio.h>
#include <stdlib.h>

int max(int a, int b, int c, int d, int e, int *idx)
{
    int max = a;
    *idx = 0;
    if (b > max) {
        max = b;
        *idx = 1;
    }
    if (c > max) {
        max = c;
        *idx = 2;
    }
    if (d > max) {
        max = d;
        *idx = 3;
    }
    if (e > max) {
        max = e;
        *idx = 4;
    }
    return max;
}

int main()
{
    int a, b, c, d, e, idx = 0;
    printf("Enter five integers: ");
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
    printf("The maximum is %d, and it is the %dth number.\n", max(a, b, c, d, e, &idx), idx + 1);
    return 0;
}