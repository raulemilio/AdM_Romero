#pragma once

#include <stdint.h>


void asm_svc (void);

uint32_t asm_sum (uint32_t firstOperand, uint32_t secondOperand);

void asm_productoEscalar32 (uint32_t * vectorIn, uint32_t * vectorOut, uint32_t longitud, uint32_t escalar);
void asm_eco (int32_t * vectorIn, int32_t * vectorEco, uint32_t longitud, uint32_t eco);
