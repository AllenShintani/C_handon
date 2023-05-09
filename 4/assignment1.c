#include <stdio.h>

int find_even(int *a, int len) {
    for (int i = 0; i < len; i++) {
        if (a[i] % 2 == 0) {
            return 1;
        }
    }
    return 0;
}

int main() {
    int a[5];
    printf("Enter five integers: ");
    scanf("%d %d %d %d %d", &a[0], &a[1], &a[2], &a[3], &a[4]);
    if (find_even(a, 5)) {
        printf("There is at least one even number.\n");
    } else {
        printf("There is no even number.\n");
    }
    return 0;
}