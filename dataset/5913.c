/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.2.0
 * Git version: dcef523
 * Options:   --no-structs --no-pointers --no-math64 --max-funcs 4 --no-unions --output 5913.c
 * Seed:      1854297364
 */

#include "csmith.h"


static long __undefined;

/* --- Struct/Union Declarations --- */
/* --- GLOBAL VARIABLES --- */
static volatile uint16_t g_2[3][10] = {{0UL,0UL,0UL,0UL,0UL,0UL,0UL,0UL,0UL,0UL},{0UL,0UL,0UL,0UL,0UL,0UL,0UL,0UL,0UL,0UL},{0UL,0UL,0UL,0UL,0UL,0UL,0UL,0UL,0UL,0UL}};
static volatile uint32_t g_7 = 0x34BF8F0AL;/* VOLATILE GLOBAL g_7 */
static int32_t g_10 = 0x7FBF2121L;


/* --- FORWARD DECLARATIONS --- */
static uint16_t  func_1(void);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_2 g_7 g_10
 * writes: g_2 g_7 g_10
 */
static uint16_t  func_1(void)
{ /* block id: 0 */
    int8_t l_5 = 0L;
lbl_6:
    --g_2[2][6];
    l_5 &= (-1L);
    if (l_5)
        goto lbl_6;
    for (l_5 = 2; (l_5 >= 0); l_5 -= 1)
    { /* block id: 6 */
        ++g_7;
        for (g_10 = 0; (g_10 <= 2); g_10 += 1)
        { /* block id: 10 */
            int i, j;
            return g_2[g_10][(g_10 + 1)];
        }
    }
    return l_5;
}




/* ---------------------------------------- */
int main (int argc, char* argv[])
{
    int i, j;
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 10; j++)
        {
            transparent_crc(g_2[i][j], "g_2[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_7, "g_7", print_hash_value);
    transparent_crc(g_10, "g_10", print_hash_value);
    int checksum = platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return checksum;
}

/************************ statistics *************************
XXX max struct depth: 0
breakdown:
   depth: 0, occurrence: 3
XXX total union variables: 0

XXX non-zero bitfields defined in structs: 0
XXX zero bitfields defined in structs: 0
XXX const bitfields defined in structs: 0
XXX volatile bitfields defined in structs: 0
XXX structs with bitfields in the program: 0
breakdown:
XXX full-bitfields structs in the program: 0
breakdown:
XXX times a bitfields struct's address is taken: 0
XXX times a bitfields struct on LHS: 0
XXX times a bitfields struct on RHS: 0
XXX times a single bitfield on LHS: 0
XXX times a single bitfield on RHS: 0

XXX max expression depth: 2
breakdown:
   depth: 1, occurrence: 9
   depth: 2, occurrence: 2

XXX total number of pointers: 0

XXX times a non-volatile is read: 3
XXX times a non-volatile is write: 3
XXX times a volatile is read: 1
XXX    times read thru a pointer: 0
XXX times a volatile is write: 2
XXX    times written thru a pointer: 0
XXX times a volatile is available for access: 3
XXX percentage of non-volatile access: 66.7

XXX forward jumps: 0
XXX backward jumps: 1

XXX stmts: 8
XXX max block depth: 2
breakdown:
   depth: 0, occurrence: 5
   depth: 1, occurrence: 2
   depth: 2, occurrence: 1

XXX percentage a fresh-made variable is used: 75
XXX percentage an existing variable is used: 25
********************* end of statistics **********************/

