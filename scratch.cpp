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
    std::bitset<4> x {0b1100};

    std::cout << x << '\n';
    std::cout << (x>>1) << '\n';    // shift right by 1, yields 0110
    std::cout << (x << 1) << '\n';  // shift left by 1, yielding 1000;
    return 0;
}
