/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.2.0
 * Git version: dcef523
 * Options:   --no-structs --no-pointers --no-math64 --max-funcs 4 --no-unions --output 14171.c
 * Seed:      2137743760
 */

#include "csmith.h"


static long __undefined;

/* --- Struct/Union Declarations --- */
/* --- GLOBAL VARIABLES --- */
static uint32_t g_4 = 4294967290UL;
static uint16_t g_7[7][7] = {{0x5E08L,1UL,0UL,65535UL,0xBD0AL,65535UL,0x2F76L},{0x2DAFL,0x1653L,0xBD0AL,0xBD0AL,0x1653L,0x2DAFL,0UL},{0x2DAFL,0x5E08L,0xD8F8L,1UL,65532UL,65534UL,0x576CL},{0x5E08L,0x2F76L,0x576CL,6UL,0x1A95L,0x2226L,65532UL},{0x1A95L,0x5E08L,65535UL,65534UL,65534UL,65535UL,0x5E08L},{1UL,0x1653L,65535UL,0x2226L,65535UL,65534UL,0xD8F8L},{0xC751L,1UL,0x576CL,65535UL,65535UL,1UL,2UL}};


/* --- FORWARD DECLARATIONS --- */
static uint8_t  func_1(void);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_4
 * writes: g_4 g_7
 */
static uint8_t  func_1(void)
{ /* block id: 0 */
    int32_t l_2 = 0x42EB90DAL;
    int32_t l_3 = 1L;
    --g_4;
    for (l_3 = 0; l_3 < 7; l_3 += 1)
    {
        for (g_4 = 0; g_4 < 7; g_4 += 1)
        {
            g_7[l_3][g_4] = 0x069FL;
        }
    }
    return g_4;
}




/* ---------------------------------------- */
int main (int argc, char* argv[])
{
    int i, j;
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_4, "g_4", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 7; j++)
        {
            transparent_crc(g_7[i][j], "g_7[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
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

XXX max expression depth: 1
breakdown:
   depth: 1, occurrence: 4

XXX total number of pointers: 0

XXX times a non-volatile is read: 1
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
