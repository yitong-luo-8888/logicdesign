#include <stdio.h>

// Function to disassemble the instruction
void disassemble(int instruction) {
    // Extract fields using bitwise operations
    int opcode = (instruction >> 12) & 0xF; // Extract the upper 4 bits (15-12)
    int rw = (instruction >> 8) & 0xF;      // Extract bits 11-8
    int ra = (instruction >> 4) & 0xF;      // Extract bits 7-4
    int rb = instruction & 0xF;             // Extract the lowest 4 bits (3-0)

    // Print the result
    printf("opcode = %X rw = %X ra = %X rb = %X\n", opcode, rw, ra, rb);
}

int main() {
    // Test the function with the provided instructions
    disassemble(0xBEAD);
    disassemble(0xBEE5);
    disassemble(0xEEEE);

    return 0;
}
