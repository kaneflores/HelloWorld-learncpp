#include <iostream>
#include <string_view>
#include <cstdint> // for std::uint8_t
#include <bitset>
#include <utility>

#define PASS
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

void foo(int x, int y){
    if (x>y){
        PASS;
    }
    else{
        PASS;
    }
}

int calculate(int x, int y, char c){
    char op{c};

    int res{};
    switch(op){
        case '+':
            res = x + y;
            break;
        case '-':
            res = x - y;
            break;
        case '*':
            res = x * y;
            break;
        case '/':
            res = (x / y);
            break;
        case '%':
            res = (x % y);
            break;
        default:{
            std::cout << "Invalid operation: Please try again: ";
            char c{};
            std::cin >> c;
            calculate(x, y, c);
        }
    }
    return res;




}
int main(){
    foo(4,7);

    std::cout << calculate(5,5, 'k') << '\n';
    return 0;
}


