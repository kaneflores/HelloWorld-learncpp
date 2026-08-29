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

namespace constants{
    constexpr int minRideHeightCM {140};
}

int main(){
    

    std::cout << "Enter your height (in cm): ";
    int x{};
    std::cin >> x;

    if (x >= constants::minRideHeightCM){
        std::cout << "You are tall enough to ride.\n";
    }else{
        std::cout << "You are not tall enough to ride. \n";
        std::cout << "Too bad\n";
    }








    return 0;
}


