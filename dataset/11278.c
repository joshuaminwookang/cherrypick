/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.2.0
 * Git version: dcef523
 * Options:   --no-structs --no-pointers --no-math64 --max-funcs 4 --no-unions --output 11278.c
 * Seed:      599759622
 */

#include "csmith.h"


static long __undefined;

/* --- Struct/Union Declarations --- */
/* --- GLOBAL VARIABLES --- */
static uint16_t g_4[3][8] = {{0UL,0x897AL,0UL,0UL,0x897AL,0UL,0UL,0x897AL},{0x897AL,0UL,0UL,0x897AL,0UL,0UL,0x897AL,0UL},{0x897AL,0x897AL,0x57E8L,0x897AL,0x897AL,0x57E8L,0x897AL,0x897AL}};
static int32_t g_6 = 0x19AC196AL;


/* --- FORWARD DECLARATIONS --- */
static uint32_t  func_1(void);
static int32_t  func_2(int16_t  p_3);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_4 g_6
 * writes: g_6
 */
static uint32_t  func_1(void)
{ /* block id: 0 */
    g_6 = func_2(g_4[0][5]);
    return g_6;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
static int32_t  func_2(int16_t  p_3)
{ /* block id: 1 */
    uint32_t l_5 = 0xDC7555B7L;
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
        for (j = 0; j < 8; j++)
        {
            transparent_crc(g_4[i][j], "g_4[i][j]", print_hash_value);
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
   depth: 1, occurrence: 3
   depth: 2, occurrence: 1

XXX total number of pointers: 0

XXX times a non-volatile is read: 3
XXX times a non-volatile is write: 1
XXX times a volatile is read: 0
XXX    times read thru a pointer: 0
XXX times a volatile is write: 0
XXX    times written thru a pointer: 0
XXX times a volatile is available for access: 0
XXX percentage of non-volatile access: 100

XXX forward jumps: 0
XXX backward jumps: 0

XXX stmts: 3
XXX max block depth: 0
breakdown:
   depth: 0, occurrence: 3

XXX percentage a fresh-made variable is used: 75
XXX percentage an existing variable is used: 25
********************* end of statistics **********************/

