.text
ldi r5, 0xAB
ldi r6, 0xFD
not r7, r5
not r8, r6
and r10, r5, r8
and r12, r6, r7
or r11, r10, r12
quit
