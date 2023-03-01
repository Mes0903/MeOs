#ifndef UTILS_H__
#define UTILS_H__

#include <stdint.h>

extern uint32_t get32(uint64_t);
extern void put32(uint64_t, uint32_t);
extern void delay(int32_t);

#endif