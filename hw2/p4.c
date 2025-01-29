#include <stdio.h>
#include <stdint.h> // For int32_t

void add_and_check_overflow(int32_t a, int32_t b) {
    // Calculate the sum
    int32_t sum = a + b;

    // Detect overflow using boolean operators
    // Positive overflow occurs when a and b are positive, and the sum becomes negative
    int pos_overflow = (~(a & b) & (sum & ~(a | b))) >> 31;

    // Negative overflow occurs when a and b are negative, and the sum becomes positive
    int neg_overflow = ((a & b) & (~sum)) >> 31;

    // Print the results
    printf("a = %d (0x%X), b = %d (0x%X)\n", a, a, b, b);
    printf("Sum = %d (0x%X)\n", sum, sum);

    // Check for overflow
    if (pos_overflow || neg_overflow) {
        printf("Overflow occurred!\n");
    } else {
        printf("No overflow.\n");
    }
}

int main() {
    // Test cases
    add_and_check_overflow(123, 456);
    add_and_check_overflow(-300, -250);
    add_and_check_overflow(0x7FFFFFFF, 1);
    add_and_check_overflow(0x80000000, -1);
    add_and_check_overflow(0x7FFFFFFF, 0x80000000);

    return 0;
}
