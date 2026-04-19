#ifndef UART_H
#define UART_H

struct uart_driver {
    // UART name, e.g., "UART1"
    const char *name; 

    // UART handle or context, specific to the underlying hardware or library
    void *uart_handle;

    // UART bitrate, e.g., 115200
    int uart_bitrate; 
    
    // UART word length, e.g., UART_WORDLENGTH_8B
    int uart_word_length;

    // UART stop bits, e.g., UART_STOPBITS_1
    int uart_stop_bits;
};

struct uart_ops {
    // Initialize the UART with the specified configuration
    int (*init)(struct uart_driver *driver);

    // Transmit data over the UART
    int (*transmit)(struct uart_driver *driver, const uint8_t *data, size_t size);

    // Receive data from the UART
    int (*receive)(struct uart_driver *driver, uint8_t *buffer, size_t size);

    // Deinitialize the UART
    int (*deinit)(struct uart_driver *driver);
};

#endif
