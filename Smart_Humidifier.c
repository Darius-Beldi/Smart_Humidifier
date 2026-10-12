#include <stdio.h>
#include "pico/stdlib.h"
#include "ST7735_TFT.h"

#define a 1 


int main()
{
    stdio_init_all();

    while (true) {
        printf("Hello, world!\n");
        sleep_ms(1000);
    }
}
