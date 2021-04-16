#include "stdint.h"
#include <stdio.h>
#include <iostream>
using namespace std;

int main() {
	uint16_t testet = 11;
    uint16_t testettwo = 4;
    uint16_t result;

    // cout << std::hex << testet;
    //testet >>= 4;
    // cout << std::hex << testet;
    result = testet|testettwo;
    cout << std::hex << testet << "|" << testettwo << ":" << result;
    

	return 0;
}

