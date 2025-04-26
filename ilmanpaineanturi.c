#include <stdio.h>
#include <inttypes.h>
#include <math.h>

uint32_t ilmanpaine(uint8_t xlsb, uint8_t lsb, uint8_t msb);

int main() {

    uint8_t xlsb=-34;
    uint8_t lsb=-68;
    uint8_t msb=24;
    
    printf("%u", ilmanpaine(xlsb, lsb, msb));
    return 0;
}

uint32_t ilmanpaine(uint8_t xlsb, uint8_t lsb, uint8_t msb){

    uint32_t paine = 0;

    paine = (msb << 12)|(lsb<<4)|(xlsb>>4);

    return paine;
}
