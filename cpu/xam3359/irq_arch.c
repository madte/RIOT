/*
 * Copyright (C) 2014 Freie Universität Berlin
 *
 * This file is subject to the terms and conditions of the GNU Lesser General
 * Public License. See the file LICENSE in the top level directory for more
 * details.
 */

/**
 * @ingroup     cpu_xam3359
 * @{
 *
 * @file        irq_arch.c
 * @brief       Implementation of the kernels irq interface
 *
 * @author      Max Dieckmann <dieckmann@zedat.fu-berlin.de>
 * @author      Martin Kessel <martin.kessel@fu-berlin.de>
 * @}
 */

#include <stdint.h>
#include "arch/irq_arch.h"
#include "cpu.h"

/**
 * @brief Disable all maskable interrupts
 */
unsigned int irq_arch_disable(void)
{
}

/**
 * @brief Enable all maskable interrupts
 */
unsigned int irq_arch_enable(void)
{
}

/**
 * @brief Restore the state of the IRQ flags
 */
void irq_arch_restore(unsigned int state)
{
}

/**
 * @brief See if the current context is inside an ISR
 */
int irq_arch_in(void)
{
}
