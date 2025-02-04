.data
// int X = 0xFADE;
X: 0xFADE

// int Z = 0x123A
Z: 0x123A

.text
main:			// int main()
				// {
ldi r1, X		// 		int *r1_X_ptr = &X;	
ld r2, r1, 0	// 		int r2_v = *r1_X_ptr;
ldi r1, Z		//		int *r1_Z_ptr = &Z;
ld r3, r1, 0	//		int r3_c = *r1_Z_ptr;
ldi r4, 1		// 		int temp = 1;
sub r3, r3, r4	//		r3_c -= temp;
st r3, r1, 1	//		*(r1_Z_ptr) = r3
quit			// }
