
.data
a:      .word 17
b:      .word 25

.text
.globl main

main:
    la   t0, a
    lw   t1, 0(t0)       # t1 = a

    la   t0, b
    lw   t2, 0(t0)       # t2 = b

    bge  t1, t2, print_a # if a >= b, print a

    mv   a0, t2          # otherwise print b
    j    print_result

print_a:
    mv   a0, t1

print_result:
    li   a7, 1           # print integer (if supported by simulator)
    ecall

    li   a7, 10          # exit (if supported by simulator)
    ecall
