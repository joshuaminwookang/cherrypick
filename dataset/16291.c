/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.2.0
 * Git version: dcef523
 * Options:   --no-structs --no-pointers --no-math64 --max-funcs 4 --no-unions --output 16291.c
 * Seed:      3119707362
 */

#include "csmith.h"


static long __undefined;

/* --- Struct/Union Declarations --- */
/* --- GLOBAL VARIABLES --- */
static uint8_t g_2[8] = {254UL,254UL,254UL,254UL,254UL,254UL,254UL,254UL};
static int32_t g_3[5] = {0L,0L,0L,0L,0L};
static int16_t g_4 = (-1L);


/* --- FORWARD DECLARATIONS --- */
static uint8_t  func_1(void);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_3 g_2
 * writes: g_3
 */
static uint8_t  func_1(void)
{ /* block id: 0 */
    uint32_t l_5 = 0xFA2FAFD1L;
    int32_t l_8 = 4L;
    for (g_3[3] = 7; (g_3[3] >= 0); g_3[3] -= 1)
    { /* block id: 3 */
        int i;
        --l_5;
        return g_2[g_3[3]];
    }
    l_8 = l_5;
    g_3[3] ^= g_2[4];
    return g_3[3];
}




/* ---------------------------------------- */
int main (int argc, char* argv[])
{
    int i;
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 8; i++)
    {
        transparent_crc(g_2[i], "g_2[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_3[i], "g_3[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_4, "g_4", print_hash_value);
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
   depth: 1, occurrence: 8
   depth: 2, occurrence: 1

XXX total number of pointers: 0

XXX times a non-volatile is read: 5
XXX times a non-volatile is write: 4
XXX times a volatile is read: 0
XXX    times read thru a pointer: 0
XXX times a volatile is write: 0
XXX    times written thru a pointer: 0
XXX times a volatile is available for access: 0
XXX percentage of non-volatile access: 100

XXX forward jumps: 0
XXX backward jumps: 0

XXX stmts: 6
XXX max block depth: 1
breakdown:
   depth: 0, occurrence: 4
   depth: 1, occurrence: 2

XXX percentage a fresh-made variable is used: 42.9
XXX percentage an existing variable is used: 57.1
********************* end of statistics **********************/

