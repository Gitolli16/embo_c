#include <stdio.h>
#include <inttypes.h>
#include <math.h>

float lampotila(uint16_t rekisteri);

/*int main() {
    uint16_t rekisteri_bitit = 0b0011001000000000;
    printf("%.10f", lampotila(rekisteri_bitit));
    return 0;
}*/

float lampotila(uint16_t rekisteri) {
    float asteet = 0;
    rekisteri = rekisteri >> 2;
    asteet = rekisteri * 0.03125;
    return asteet;
}