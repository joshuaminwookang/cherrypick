/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.2.0
 * Git version: dcef523
 * Options:   --no-structs --no-pointers --no-math64 --max-funcs 4 --no-unions --output 14795.c
 * Seed:      1460203636
 */

#include "csmith.h"


static long __undefined;

/* --- Struct/Union Declarations --- */
/* --- GLOBAL VARIABLES --- */
static int16_t g_5[2][5] = {{0xE53DL,0xE53DL,0xE53DL,0xE53DL,0xE53DL},{0x97EEL,0x97EEL,0x97EEL,0x97EEL,0x97EEL}};
static uint16_t g_6 = 65535UL;


/* --- FORWARD DECLARATIONS --- */
static int32_t  func_1(void);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_6 g_5
 * writes: g_6
 */
static int32_t  func_1(void)
{ /* block id: 0 */
    uint8_t l_2 = 1UL;
    l_2--;
    for (l_2 = 0; (l_2 <= 1); l_2 += 1)
    { /* block id: 4 */
        g_6 = l_2;
        for (g_6 = 0; (g_6 <= 1); g_6 += 1)
        { /* block id: 8 */
            int i, j;
            return g_5[l_2][(g_6 + 2)];
        }
    }
    for (l_2 = 0; (l_2 <= 1); l_2 += 1)
    { /* block id: 14 */
        return g_5[1][0];
    }
    for (g_6 = 0; (g_6 <= 1); g_6 += 1)
    { /* block id: 19 */
        uint16_t l_7 = 65526UL;
        return l_7;
    }
    return g_5[1][1];
}




/* ---------------------------------------- */
int main (int argc, char* argv[])
{
    int i, j;
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 5; j++)
        {
            transparent_crc(g_5[i][j], "g_5[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_6, "g_6", print_hash_value);
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
   depth: 2, occurrence: 4

XXX total number of pointers: 0

XXX times a non-volatile is read: 9
XXX times a non-volatile is write: 6
XXX times a volatile is read: 0
XXX    times read thru a pointer: 0
XXX times a volatile is write: 0
XXX    times written thru a pointer: 0
XXX times a volatile is available for access: 0
XXX percentage of non-volatile access: 100

XXX forward jumps: 0
XXX backward jumps: 0

XXX stmts: 10
XXX max block depth: 2
breakdown:
   depth: 0, occurrence: 5
   depth: 1, occurrence: 4
   depth: 2, occurrence: 1

XXX percentage a fresh-made variable is used: 50
XXX percentage an existing variable is used: 50
********************* end of statistics **********************/
