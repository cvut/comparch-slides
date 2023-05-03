riscv64-unknown-elf-gcc  -I. -ggdb -O1 -static -mabi=ilp32 -march=rv32im -nostartfiles -nostdlib -lgcc -fno-omit-frame-pointer $1 -o ${1/.c/}
riscv64-unknown-elf-objdump --section=.text --disassemble --show-raw-insn ${1/.c/}
