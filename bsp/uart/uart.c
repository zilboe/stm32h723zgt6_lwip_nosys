#include "uart.h"


struct uart_driver uart1_driver = {
    .name = "UART1",
    .uart_handle = NULL, // This will be set during initialization
    .uart_bitrate = 115200,
    .uart_word_length = 8, // Assuming 8 bits
    .uart_stop_bits = 1,   // Assuming 1 stop bit
}


