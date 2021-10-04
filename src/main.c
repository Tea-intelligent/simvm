#include <stdio.h>
#include <stdbool.h>
#include <stdint.h>

int pc = 1; //program counter
int running = 1;

/* instruction set*/

typedef enum {
    ADD,    // add
    SUB,    // sub
    AND,    // logical and
    OR,     // logical or
    XOR,    // logical xor
    SR,     // shift bit right
    SRA,    // shifr bit right arithmetic
    SL,     // shift bit left
    ADDI,   // adding with a immediate data
    ANDI,   // logical and with immediate data
    ORI,    // logical or with immediate data
    XORI,   // logical xor with immediate data
    LW,     // load word
    SW,     // xor word
    BEQ,    // brand if equal
    BNE     // brand if not equal
}Instructions;

/* reisters */

typedef enum{
    R0 = 0,
    R1,
    R2,
    R3,
    R4,
    R5,
    R6,
    R7,
    R8,
    R9,
    R10,
    R11,
    R12,
    R13,
    R14,
    R15,
}Register;

/* memory */
uint16_t mem[16];


int init(){

}

int fetch(){

}

int execute(){

}

int main(){

}



