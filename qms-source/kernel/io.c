#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

uint8_t inb(uint16_t port) {
    uint8_t ret;
    __asm__ __volatile__ ( "inb %1, %0"
                           : "=a"(ret)
                           : "dN"(port)
                           : );
    return ret;
}

void outb(uint16_t port, uint8_t value) {
    __asm__ __volatile__ ( "outb %1, %0"
                           :
                           : "dN"(port), "a"(value)
                           : );
}

#ifdef __cplusplus
} 
#endif
