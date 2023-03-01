#ifndef UART_H__
#define UART_H__

void uart_init (void);
char uart_recv (void);
void uart_send (char);
void uart_send_string(char*);

#endif