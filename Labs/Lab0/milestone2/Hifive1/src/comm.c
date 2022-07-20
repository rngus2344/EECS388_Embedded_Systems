#include <stdint.h>
#include <stdio.h>
#include <string.h>

#include "eecs388_lib.h"

int main()
{
    // initialize UART channels
    ser_setup(0); // uart0 (debug)
    ser_setup(1); // uart1 (raspberry pi)
    
    printf("Setup completed.\n");
    printf("Begin the main loop.\n");
    
    while (1) {
        // YOUR CODE HERE
        if (ser_isready(1)) {
            char data = ser_read(1);
            ser_write(0, data);
        }
    }
    return 0;
}
