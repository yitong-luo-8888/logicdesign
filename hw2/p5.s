.text
ldi r1, 0x37
ldi r2, 0x13
ldi r5, 0x8
shl r2, r2, r5
or r3, r2, r1
ldi r4, 0x44
st r3, r4, 0
st r3, r4, 4
quit
