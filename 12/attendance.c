#include <stdio.h>

int equal_bits(unsigned char x, unsigned char y) {
    int equal_bit_count = 0;
    unsigned char diff = x ^ y;  // XOR to get the bit difference

    for (int i = 0; i < 8; i++) {
        if ((diff & 1) == 0) {   // Check if the least significant bit is 0
            equal_bit_count++;
        }
        diff >>= 1;  // Right shift the difference
    }

    return equal_bit_count;
}

int main() {
    printf("%d\n", equal_bits(75, 225));
    return 0;
}
