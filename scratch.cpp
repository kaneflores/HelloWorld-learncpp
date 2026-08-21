#include <iostream>
#include <string_view>
#include <cstdint> // for std::uint8_t
#include <bitset>
using namespace std::string_view_literals;

int getValue(){
    std::cout << "Enter a number: ";
    int x{};
    std::cin >> x;
    return x;
}

int main(){
    std::bitset<8> bits{0b0000'0101}; // we need 8 bits, start with bit pattern 0000 0101
    //bits.set(3);    // set bit position 3 to 1 ( now we have 0000 1101)
    bits.flip(4);   // flip bit 4 (now 0001 1101)
    bits.reset(4);  // set bit 4 back to 0 ( now its 0000 1101)

    std::cout << "All the bits: " << bits << '\n';
    std::cout << "Bit 3 has value: " << bits.test(3) << '\n';
    std::cout << "Bit 4 has value: " << bits.test(4) << '\n';

    
    return 0;
}
