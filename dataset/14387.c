/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.2.0
 * Git version: dcef523
 * Options:   --no-structs --no-pointers --no-math64 --max-funcs 4 --no-unions --output 14387.c
 * Seed:      4276387567
 */

#include "csmith.h"


static long __undefined;

/* --- Struct/Union Declarations --- */
/* --- GLOBAL VARIABLES --- */
static int32_t g_2[8][4] = {{0L,0L,0L,0L},{0L,0L,5L,(-1L)},{0L,5L,0L,7L},{0L,(-1L),7L,7L},{5L,5L,0L,(-1L)},{(-1L),0L,0L,0L},{5L,0L,7L,0L},{0L,0L,0L,0L}};
static volatile int32_t g_3 = 0x5925EF2CL;/* VOLATILE GLOBAL g_3 */
static int32_t g_4 = 0x44D1878AL;


/* --- FORWARD DECLARATIONS --- */
static int32_t  func_1(void);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_4 g_3 g_2
 * writes: g_4 g_2
 */
static int32_t  func_1(void)
{ /* block id: 0 */
    uint16_t l_7 = 1UL;
    for (g_4 = 3; (g_4 >= 0); g_4 -= 1)
    { /* block id: 3 */
        uint32_t l_6 = 0UL;
        if (g_3)
            break;
        g_2[4][0] = (!7UL);
        if (l_6)
            continue;
        for (l_6 = 0; (l_6 <= 3); l_6 += 1)
        { /* block id: 9 */
            int i, j;
            g_2[g_4][l_6] = g_2[(g_4 + 1)][g_4];
        }
    }
    return l_7;
}




/* ---------------------------------------- */
int main (int argc, char* argv[])
{
    int i, j;
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(g_2[i][j], "g_2[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_3, "g_3", print_hash_value);
    transparent_crc(g_4, "g_4", print_hash_value);
    int checksum = platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return checksum;
}

/************************ statistics *************************
XXX max struct depth: 0
breakdown:
   depth: 0, occurrence: 2
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
   depth: 1, occurrence: 7
   depth: 2, occurrence: 2

XXX total number of pointers: 0

XXX times a non-volatile is read: 5
XXX times a non-volatile is write: 4
XXX times a volatile is read: 1
XXX    times read thru a pointer: 0
XXX times a volatile is write: 0
XXX    times written thru a pointer: 0
XXX times a volatile is available for access: 4
XXX percentage of non-volatile access: 90

XXX forward jumps: 0
XXX backward jumps: 0

XXX stmts: 7
XXX max block depth: 2
breakdown:
   depth: 0, occurrence: 2
   depth: 1, occurrence: 4
   depth: 2, occurrence: 1

XXX percentage a fresh-made variable is used: 50
XXX percentage an existing variable is used: 50
********************* end of statistics **********************/

