/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.2.0
 * Git version: dcef523
 * Options:   --no-structs --no-pointers --no-math64 --max-funcs 4 --no-unions --output 2315.c
 * Seed:      4155079374
 */

#include "csmith.h"


static long __undefined;

/* --- Struct/Union Declarations --- */
/* --- GLOBAL VARIABLES --- */
static uint8_t g_2 = 0xCDL;
static uint16_t g_3[10][5] = {{0xDBE8L,3UL,0x0585L,0x0585L,3UL},{9UL,0x7F37L,0xB023L,0UL,65535UL},{0xDBE8L,3UL,0x0585L,0x0585L,3UL},{9UL,0x7F37L,0xB023L,0UL,65535UL},{0xDBE8L,3UL,0x0585L,0x0585L,3UL},{9UL,0x7F37L,0xB023L,0UL,65535UL},{0xDBE8L,3UL,0x0585L,0x0585L,3UL},{9UL,0x7F37L,0xB023L,0UL,65535UL},{0xDBE8L,3UL,0x0585L,0x0585L,3UL},{9UL,0xDE05L,65535UL,0x7F37L,0xEAD9L}};
static int8_t g_4 = 0x4EL;


/* --- FORWARD DECLARATIONS --- */
static int32_t  func_1(void);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_2 g_3
 * writes: g_3 g_4
 */
static int32_t  func_1(void)
{ /* block id: 0 */
    g_4 = (g_3[1][0] &= g_2);
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
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 5; j++)
        {
            transparent_crc(g_3[i][j], "g_3[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
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
   depth: 1, occurrence: 2
   depth: 2, occurrence: 1

XXX total number of pointers: 0

XXX times a non-volatile is read: 2
XXX times a non-volatile is write: 2
XXX times a volatile is read: 0
XXX    times read thru a pointer: 0
XXX times a volatile is write: 0
XXX    times written thru a pointer: 0
XXX times a volatile is available for access: 0
XXX percentage of non-volatile access: 100

XXX forward jumps: 0
XXX backward jumps: 0

XXX stmts: 2
XXX max block depth: 0
breakdown:
   depth: 0, occurrence: 2

XXX percentage a fresh-made variable is used: 75
XXX percentage an existing variable is used: 25
********************* end of statistics **********************/
