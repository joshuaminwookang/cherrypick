/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.2.0
 * Git version: dcef523
 * Options:   --no-structs --no-pointers --no-math64 --max-funcs 4 --no-unions --output 17055.c
 * Seed:      270485868
 */

#include "csmith.h"


static long __undefined;

/* --- Struct/Union Declarations --- */
/* --- GLOBAL VARIABLES --- */
static const volatile uint32_t g_2 = 8UL;/* VOLATILE GLOBAL g_2 */
static int8_t g_4[7][8] = {{0x3BL,0L,0L,0L,0x3BL,0xE0L,(-1L),(-1L)},{0xE0L,0xF8L,0x3BL,(-2L),0xC7L,0xA2L,0L,0L},{0L,0xEDL,0x3BL,0x3BL,0xEDL,0L,(-1L),0xC7L},{0xC7L,0xB1L,0L,(-1L),0L,(-2L),0L,0xE0L},{0L,0x58L,0xE0L,(-1L),0xE0L,0x58L,0L,0xC7L},{0xEDL,0xE0L,0xF8L,0x3BL,(-2L),0xC7L,0xB1L,0xE0L},{(-1L),0L,0xEDL,0x3BL,0x3BL,0xEDL,0L,(-1L)}};
static int32_t g_5[2] = {0xABFC3938L,0xABFC3938L};


/* --- FORWARD DECLARATIONS --- */
static uint16_t  func_1(void);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_2
 * writes: g_5 g_4
 */
static uint16_t  func_1(void)
{ /* block id: 0 */
    volatile int32_t l_3 = 0xF94964A5L;/* VOLATILE GLOBAL l_3 */
    l_3 = g_2;
    for (l_3 = 0; l_3 < 7; l_3 += 1)
    {
        for (g_5[0] = 0; g_5[0] < 8; g_5[0] += 1)
        {
            g_4[l_3][g_5[0]] = 0x37L;
        }
    }
    return g_2;
}




/* ---------------------------------------- */
int main (int argc, char* argv[])
{
    int i, j;
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 8; j++)
        {
            transparent_crc(g_4[i][j], "g_4[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_5[i], "g_5[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
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

XXX max expression depth: 1
breakdown:
   depth: 1, occurrence: 4

XXX total number of pointers: 0

XXX times a non-volatile is read: 0
XXX times a non-volatile is write: 0
XXX times a volatile is read: 2
XXX    times read thru a pointer: 0
XXX times a volatile is write: 1
XXX    times written thru a pointer: 0
XXX times a volatile is available for access: 2
XXX percentage of non-volatile access: 0

XXX forward jumps: 0
XXX backward jumps: 0

XXX stmts: 3
XXX max block depth: 0
breakdown:
   depth: 0, occurrence: 3

XXX percentage a fresh-made variable is used: 66.7
XXX percentage an existing variable is used: 33.3
********************* end of statistics **********************/

