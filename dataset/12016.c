/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.2.0
 * Git version: dcef523
 * Options:   --no-structs --no-pointers --no-math64 --max-funcs 4 --no-unions --output 12016.c
 * Seed:      1071309605
 */

#include "csmith.h"


static long __undefined;

/* --- Struct/Union Declarations --- */
/* --- GLOBAL VARIABLES --- */
static volatile int32_t g_2[10][10] = {{(-1L),6L,0x274BF90EL,(-1L),0L,0xF27D2703L,(-1L),0x085C9E53L,0x085C9E53L,(-1L)},{(-1L),6L,(-1L),(-1L),6L,(-1L),0x4FFB871CL,1L,8L,0xF27D2703L},{1L,0xA5043C4AL,5L,(-1L),(-1L),(-1L),0L,0x274BF90EL,0L,(-1L)},{1L,0x085C9E53L,(-1L),0x085C9E53L,1L,(-1L),(-1L),0x1DBA3399L,0L,0xAC64A684L},{(-1L),(-1L),0x1DBA3399L,0L,0xAC64A684L,0xF27D2703L,(-1L),(-1L),1L,0x443250E6L},{(-1L),8L,8L,(-1L),0x085C9E53L,0xF27D2703L,0x4FFB871CL,0x1DBA3399L,5L,0L},{0x274BF90EL,0x085C9E53L,0xAC64A684L,1L,5L,0x4FFB871CL,8L,0x4FFB871CL,5L,1L},{0L,0x274BF90EL,0L,(-1L),(-1L),(-1L),5L,0xA5043C4AL,1L,(-1L)},{(-1L),(-1L),0x085C9E53L,8L,0xA5043C4AL,0x443250E6L,0x443250E6L,0xA5043C4AL,8L,0x085C9E53L},{0xAC64A684L,0xAC64A684L,0L,0L,1L,0x274BF90EL,(-1L),0x4FFB871CL,0xA5043C4AL,0xF27D2703L}};
static int32_t g_3 = (-7L);


/* --- FORWARD DECLARATIONS --- */
static uint8_t  func_1(void);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_3 g_2
 * writes: g_3 g_2
 */
static uint8_t  func_1(void)
{ /* block id: 0 */
    int8_t l_6 = 0xF3L;
    for (g_3 = 0; (g_3 <= 16); g_3 = safe_add_func_uint16_t_u_u(g_3, 2))
    { /* block id: 3 */
        g_2[4][5] ^= l_6;
    }
    for (g_3 = 0; g_3 < 10; g_3 += 1)
    {
        for (l_6 = 0; l_6 < 10; l_6 += 1)
        {
            g_2[g_3][l_6] = 1L;
        }
    }
    return g_2[7][3];
}




/* ---------------------------------------- */
int main (int argc, char* argv[])
{
    int i, j;
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 10; j++)
        {
            transparent_crc(g_2[i][j], "g_2[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_3, "g_3", print_hash_value);
    int checksum = platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return checksum;
}

/************************ statistics *************************
XXX max struct depth: 0
breakdown:
   depth: 0, occurrence: 1
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
   depth: 1, occurrence: 4
   depth: 2, occurrence: 1

XXX total number of pointers: 0

XXX times a non-volatile is read: 2
XXX times a non-volatile is write: 1
XXX times a volatile is read: 1
XXX    times read thru a pointer: 0
XXX times a volatile is write: 1
XXX    times written thru a pointer: 0
XXX times a volatile is available for access: 2
XXX percentage of non-volatile access: 60

XXX forward jumps: 0
XXX backward jumps: 0

XXX stmts: 4
XXX max block depth: 1
breakdown:
   depth: 0, occurrence: 3
   depth: 1, occurrence: 1

XXX percentage a fresh-made variable is used: 33.3
XXX percentage an existing variable is used: 66.7
********************* end of statistics **********************/

