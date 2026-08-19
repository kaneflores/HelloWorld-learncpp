#include <iostream>
#include <string_view>
#include <cstdint> // for std::uint8_t
using namespace std::string_view_literals;



int main(){
    std::cout << "Hello, world!\n"sv;
    int x{ 1 };
    int y{ 2 };

    std::cout << (++x, ++y) << '\n'; // increment x and y, evaluates to the right operand

    return 0;

}
