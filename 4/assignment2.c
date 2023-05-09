#include <stdio.h>

//課題の内容的に条件はなんでもよいみたい
int cond(int x) {
    return x % 2 == 0;
}

int find(int *a,int len, int (cond)(int)) {
    for (int i = 0; i < len; i++) {
        if (cond(a[i])) {
            return 1;
        }
    }
    return 0;
}

int main() {
    int a[5];
    printf("Enter five integers: ");
    scanf("%d %d %d %d %d", &a[0], &a[1], &a[2], &a[3], &a[4]);
    if (find(a, 5, cond)) {
        printf("There is at least one even number.\n");
    } else {
        printf("There is no even number.\n");
    }
    return 0;
}