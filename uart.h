/*
 * uart.h
 *
 *  Created on: 23-Sep-2020
 *      Author: Srikanth
 */

#ifndef UART_H_
#define UART_H_

/**
 * Read one character from UART blocking.
 *
 * @return  character received
 */
unsigned char uart_getc();

/**
 * Write one chracter to the UART blocking.
 *
 * @param[in]   *c  the character to write
 */
void uart_putc(unsigned char c);

/**
 * Write string to the UART blocking.
 *
 * @param[in]   *str    the 0 terminated string to write
 */
void uart_puts(const char *str);

void print(char *text);
void uart_init( void );

#endif /* UART_H_ */
