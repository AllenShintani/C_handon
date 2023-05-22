#include <stdio.h>
#include <string.h>

void interleave(char *d, const char *a, const char *b) {
    int len_a = strlen(a);
    int len_b = strlen(b);
    int i, j;

    for(i = 0, j = 0; i < len_a && i < len_b; i++, j+=2) {
        d[j] = a[i];
        d[j+1] = b[i];
    }

    if(len_a > len_b) {
        for(int k = i; k < len_a; k++, j++) {
            d[j] = a[k];
        }
    }

    else if(len_b > len_a) {
        for(int k = i; k < len_b; k++, j++) {
            d[j] = b[k];
        }
    }

    d[j] = '\0';
}

int main() {
    char a[] = "Hello";
    char b[] = "World";
    char d[100];

    interleave(d, a, b);
    printf("%s\n", d);

    return 0;
}
