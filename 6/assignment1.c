#include <stdio.h>

// Fraction structure
typedef struct {
    int number; // numerator
    int denom;  // denominator
} fraction;

// Print fraction
void fraction_print(fraction f) {
    printf("%d/%d\n", f.number, f.denom);
}

// Multiply fractions
fraction fraction_mul(fraction f1, fraction f2) {
    fraction result;
    result.number = f1.number * f2.number;
    result.denom = f1.denom * f2.denom;
    return result;
}

int main() {
    // Create fractions
    fraction f1 = {2, 3};
    fraction f2 = {3, 4};

    // Print fractions
    printf("Fraction 1: ");
    fraction_print(f1);

    printf("Fraction 2: ");
    fraction_print(f2);

    // Multiply and print
    fraction f3 = fraction_mul(f1, f2);
    printf("Result of multiplication: ");
    fraction_print(f3);

    return 0;
}