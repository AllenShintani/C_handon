#include <stdio.h>

int halfadder(int A, int B, int* S, int* C) {
    *S = A ^ B; 
    *C = A & B; 
    return 0;
}

int main() {
    int S, C;
    
    halfadder(0, 0, &S, &C);
    printf("A = 0, B = 0, S = %d, C = %d\n", S, C);

    halfadder(0, 1, &S, &C);
    printf("A = 0, B = 1, S = %d, C = %d\n", S, C);

    halfadder(1, 0, &S, &C);
    printf("A = 1, B = 0, S = %d, C = %d\n", S, C);

    halfadder(1, 1, &S, &C);
    printf("A = 1, B = 1, S = %d, C = %d\n", S, C);

    return 0;
}
