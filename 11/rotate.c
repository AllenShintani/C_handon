#include <stdio.h>
#include <stdint.h>

uint32_t rotate_left(uint32_t x, unsigned int n) {
    return (x << n) | (x >> (32 - n));
}

int main() {
    uint32_t x = 0x12345678;
    printf("Original: 0x%x\n", x);
    printf("Rotated: 0x%x\n", rotate_left(x, 4));

    return 0;
}
