#ifndef __RCC__
#define __RCC__

#include "stm32f103.h"

// Reset and clock control (page 99)
typedef struct rcc_t {
    unsigned volatile long cr; // 0x0 - control register
    unsigned volatile long cfgr; // 0x4 - configuration register
    unsigned volatile long cir; // 0x8 - interrupt register
    unsigned volatile long apbr2; // 0xC - APB2 peripheral reset register
    unsigned volatile long apbr1; // 0x10 - APB1 peripheral reset register
    unsigned volatile long ahbe; // 0x14 - AHB peripheral clock enable register
    unsigned volatile long apbe2; // 0x18 - APB2 peripheral enable register
    unsigned volatile long apbe1; // 0x1C - APB1 peripheral enable register
    unsigned volatile long bdcr; // 0x20 - backup domain control register
    unsigned volatile long csr; // 0x24 - control/status register
} rcc_t;

void rcc_init(void);

#endif
