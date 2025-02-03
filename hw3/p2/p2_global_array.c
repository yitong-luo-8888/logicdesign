#include <stdio.h>

int A[4] = {0x3339, 0xB128, 0x74A9, 0x227C};
int main()
{
    int* A_ptr = A;             // starting address of A
    int  i = 2;                 // array index variable
    int* Ai_ptr = A_ptr + i;    // same as &(A[i])
    int  d = *Ai_ptr;           // same as A[i]

    //for demonstration purposes
    printf("d is: %x\n", d);
}

