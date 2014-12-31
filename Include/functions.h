#ifndef _functions_h
#define _functions_h

void USART1_IRQHandler(void);
void USART_puts(char* byte);
void init_USART1(int baudrate);

#endif
