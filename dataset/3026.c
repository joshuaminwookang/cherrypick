/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.2.0
 * Git version: dcef523
 * Options:   --no-structs --no-pointers --no-math64 --max-funcs 4 --no-unions --output 3026.c
 * Seed:      1074401806
 */

#include "csmith.h"


static long __undefined;

/* --- Struct/Union Declarations --- */
/* --- GLOBAL VARIABLES --- */
static int16_t g_2[2][1][9] = {{{0xE56FL,0xDE0BL,0xE56FL,0xE56FL,0xDE0BL,0xE56FL,0xE56FL,0xDE0BL,0xE56FL}},{{0xE56FL,0xDE0BL,0xE56FL,0xE56FL,0xDE0BL,0xE56FL,0xE56FL,0xDE0BL,0xE56FL}}};
static uint8_t g_3[4] = {5UL,5UL,5UL,5UL};


/* --- FORWARD DECLARATIONS --- */
static int8_t  func_1(void);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_2 g_3
 * writes: g_3
 */
static int8_t  func_1(void)
{ /* block id: 0 */
    g_3[2] ^= (g_2[1][0][0] , g_2[1][0][0]);
    return g_3[1];
}




/* ---------------------------------------- */
int main (int argc, char* argv[])
{
    int i, j, k;
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 9; k++)
            {
                transparent_crc(g_2[i][j][k], "g_2[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_3[i], "g_3[i]", print_hash_value);
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

XXX max expression depth: 2
breakdown:
   depth: 1, occurrence: 2
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

XXX stmts: 2
XXX max block depth: 0
breakdown:
   depth: 0, occurrence: 2

XXX percentage a fresh-made variable is used: 50
XXX percentage an existing variable is used: 50
********************* end of statistics **********************/
