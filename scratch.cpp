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
    std::bitset<0> bits{ 0 };
    if (bits.size()>1 || bits.size() == 0){
        std::cout << bits.size() << " bits are in the bitset\n";
    }else{
        std::cout << bits.size() << " bit is in the bitset\n";
    }
    
    std::cout << bits.count() << " bits are set to true\n";

    std::cout << std::boolalpha;
    std::cout << "All bits are true: " << bits.all() << '\n';
    std::cout << "Some bits are true: " << bits.any() << '\n';
    std::cout << "No bits are true: " << bits.none() << '\n';

    
    return 0;
}
