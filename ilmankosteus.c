#include <stdio.h>
#include <inttypes.h>
#include <math.h>

float kosteus(uint16_t rekisteri);

/*int main() {
    uint16_t rekisteri_1 = 0x8000;
    printf("%.2f", kosteus(rekisteri_1));
    return 0;
}*/

float kosteus(uint16_t rekisteri) {
    float humidity = 0.0;
    humidity = rekisteri / pow(2,16) * 100;
    return humidity;
}