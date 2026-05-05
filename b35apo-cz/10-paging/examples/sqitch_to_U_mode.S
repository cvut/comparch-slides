a t0, user_code    # Načtení adresy uživatelského kódu
csrw mepc, t0       # Zápis adresy do mepc (kam se vrátit)

li t1, 0            # MPP = 00 (User mode)
csrw mstatus, t1    # Zápis do mstatus (nastavení budoucího režimu)

mret                # Přepnutí do U-mode a skok na adresu v mepc
nop
nop

user_code:
la t0, src_data
la t1, dst_data
lw t2, 0(t0)
sw t2, 0(t1)
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
