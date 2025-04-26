#include <stdio.h>
#include <inttypes.h>
#include <math.h>

float valoisuus(uint16_t rekisteri);

/*int main() {
    uint16_t rekisteri_1 = 0b0110110000110101;
    printf("%.2f", valoisuus(rekisteri_1));
    return 0;
}*/

/*float valoisuus(uint16_t rekisteri){
    uint16_t lux = 0;
    uint16_t expo_bits = 0;
    uint16_t fract_bits = 0;
    expo_bits = rekisteri >> 12;
    fract_bits = rekisteri << 4;
    fract_bits = fract_bits >> 4;
    lux = 0.01 * pow(2,expo_bits) * fract_bits;
    return lux;
}*/

float valoisuus(uint16_t rekisteri){

    float lux = 0;
    uint16_t fract_maski = 0xF000;
    uint16_t expo_bits = 0;
    expo_bits = rekisteri >> 12;

    lux = 0.01 * pow(2,(expo_bits)) * (rekisteri & ~(fract_maski));
    return lux;
}
