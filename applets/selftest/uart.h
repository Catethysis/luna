/**
 * This file is part of LUNA.
 *
 * Copyright (c) 2021 Great Scott Gadgets <info@greatscottgadgets.com>
 * SPDX-License-Identifier: BSD-3-Clause
 */

#pragma once

#include "resources.h"

/**
 * Transmits a single charater over our example UART.
 */
void print_char(char c);

/**
 * Transmits a string over our UART.
 */
void uart_puts(char *str);


/**
 * Prints the hex value of a byte to the UART console.
 */
void uart_print_byte(uint8_t value);
