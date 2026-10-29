
# Exercise 1 — Larger of Two Integers

The program loads two integers from memory, compares them, and
prints the larger value.

Registers:
- t0: address of a variable
- t1: first integer
- t2: second integer
- a0: value to print
- a7: environment-call selector

The bge instruction branches when the first value is greater
than or equal to the second value. Otherwise, the second value
is selected.

Test case: a = 17, b = 25
Expected output: 25
