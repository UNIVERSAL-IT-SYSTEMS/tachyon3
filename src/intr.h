/* Copyright (c) 2010 by Markus Duft <mduft@gentoo.org>
 * This file is part of the 'tachyon' operating system. */

#pragma once

#include "tachyon.h"

typedef bool (*intr_handler_t)(interrupt_t* info);

/**
 * Enable interrupts. This decrements a counter until
 * it reaches zero, and then really enables them.
 */
void intr_enable();

/**
 * Disables interrupts. This increments a counter, and
 * only disables if the counter was zero.
 */
void intr_disable();

/**
 * Retrieves the interrupt state on the current cpu.
 *
 * @return true if delivery is on, false otherwise.
 */
bool intr_state();

/**
 * Register an interrupt handler for a specific interrupt
 * gate.
 *
 * @param gate      the gate to register a handler for.
 * @param handler   the handler callback.
 */
void intr_add(uint16_t gate, intr_handler_t handler);

/**
 * Removes an interrupt handler for a specific interrupt
 * gate.
 *
 * @param gate      the gate to remove the handler from.
 * @param handler   the handler callback.
 */
void intr_remove(uint16_t gate, intr_handler_t handler);
