#ifndef UART_H
#define UART_H

#define BAUD 9600
#define BUFF_LEN 100
#define BAUD_PRESCALE (((F_CPU / (BAUD * 16UL))) - 1)

#endif
