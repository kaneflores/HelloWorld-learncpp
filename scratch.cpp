#include <iostream>
#include <string_view>
#include <cstdint> // for std::uint8_t
#include <bitset>
#include <utility>
using namespace std::string_view_literals;

namespace examplefunc{ // defined in the global scope
    int g_examplevar{}; // defined in namespace but still global if called examplefunc::examplevar
}

int getValue(){
    std::cout << "Enter a number: ";
    int x{};
    std::cin >> x;
    return x;
}

std::bitset<4> rotl(std::bitset<4> bits){
    
    return (bits << 1) | (bits >> 3);
}


int main(){
    
    std::cout << accumulate(4) << '\n'; // prints 4 etc
    std::cout << accumulate(3) << '\n'; // prints 7
    std::cout << accumulate(2) << '\n'; // 9
    std::cout << accumulate(1) << '\n'; // 10
    std::cout << accumulate(0) << '\n'; //10
    return 0;
}



