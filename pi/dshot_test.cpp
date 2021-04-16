#include "stdint.h"

uint16_t packet;

packet = 1111111;
print(packet);
packet >>= 4;
print(packet);