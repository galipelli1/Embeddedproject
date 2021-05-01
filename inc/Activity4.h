/**
 * @file Activity4.h
 * @author galipelli1 (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2021-04-30
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef ACTIVITY4_H_INCLUDED
#define ACTIVITY4_H_INCLUDED
#include<avr/io.h>
/**
 * @brief Inittialize UART serial communication ports
 * 
 * @param ubrr 
 */
void InitUART(uint16_t br);
/**
 * @brief Read characters from UART port
 * @return char
 */
char UARTread();
/**
 * @brief Write characters to UART port
 * 
 * @param data 
 */
void output(char data);

#endif // ACTIVITY4_H_INCLUDED
