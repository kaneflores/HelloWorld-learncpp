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

std::bitset<4> rotl(std::bitset<4> bits){
    
    return (bits << 1) | (bits >> 3);
}
int main(){
    



   
    return 0;
}
