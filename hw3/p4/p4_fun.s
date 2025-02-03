.text
             ldi r1, 1
             ldi r2, 2
             ldi r3, 7
             jal fun1
             and r1, r0, r0
             jal fun2
             br not_a_fun
the_end:     quit

fun1:        add r0, r1, r2
             add r0, r0, r3
             jr r15

fun2:        add r0, r1, r1
             jr r15

not_a_fun:   add r0, r2, r3
             add r0, r0, r1
             br the_end

