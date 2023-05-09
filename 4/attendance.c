#include <stdio.h>

void round100(unsigned int *p) {
    unsigned int value = *p;
    unsigned int remainder = value % 100;
    if (remainder >= 50) {
        value += 100 - remainder;
    } else {
        value -= remainder;
    }
    *p = value;
}

int main() {
    unsigned int num = 12345;
    printf("Before rounding: %u\n", num);
    round100(&num);
    printf("After rounding: %u\n", num);
    return 0;
}