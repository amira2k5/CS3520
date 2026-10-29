
# Lab 2 — Instruction Encoding Analysis

## B-type branch

Instruction: [paste your branch instruction]
32-bit encoding: [copy the exact encoding from Ripes]

Fields:
- imm[12], imm[10:5], rs2, rs1, funct3,
  imm[4:1], imm[11], opcode.

Explanation:
The branch immediate is split across several bit positions
to preserve consistent register and opcode field placement
across RISC-V instruction formats.

## J-type jump

Instruction: [paste your jal instruction]
32-bit encoding: [copy the exact encoding from Ripes]

Fields:
- imm[20], imm[10:1], imm[11], imm[19:12],
  rd, opcode.

Explanation:
The jump immediate is rearranged to provide a longer
jump range while preserving the standard 32-bit instruction
format and the destination register field.
