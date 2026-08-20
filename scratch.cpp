#include <iostream>
#include <string_view>
#include <cstdint> // for std::uint8_t
using namespace std::string_view_literals;

int getValue(){
    std::cout << "Enter a number: ";
    int x{};
    std::cin >> x;
    return x;
}

int main(){
    (false && true) || false || true
    return 0;
}
