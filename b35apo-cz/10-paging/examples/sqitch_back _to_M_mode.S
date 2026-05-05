.text
    la t0, user_code    # Načtení adresy uživatelského kódu
    csrw mepc, t0       # Zápis adresy do mepc (kam se vrátit)

    csrr t1, mstatus

    li t2, 0xffffe700  # ~(3 << 11)     # clear MPP
    and t1, t1, t2

    li t2, 0x800       # (1 << 11)      # MPP = S
    or t1, t1, t2

    csrw mstatus, t1

    la t0, trap_handler  # Načtení adresy handleru
    csrw mtvec, t0       # Zápis do mtvec

    mret                # Přepnutí do U-mode a skok na adresu v mepc

trap_handler:
    #  Zkontrolovat mcause
    csrr t0, mcause
    li t1, 11            # 11 = ecall z M-módu - beq t0, t1
    bne t0, t1, panic
    csrr t0, mepc
    addi t0, t0, 4
    csrw mepc, t0
    mret

panic:
    ebreak
    j panic

user_code:
    la t0, src_data
    la t1, dst_data
    lw t2, 0(t0)
    sw t2, 0(t1)
    ecall
    addi t0, t0, 4
    addi t1, t1, 4
    lw t2, 0(t0)
    sw t2, 0(t1)
    ecall
    nop
    nop
    j user_code

.data
.org 0x3000
src_data:
.word 0x1234, 0x5678
.org 0x4000
dst_data:
.word -1, -1
