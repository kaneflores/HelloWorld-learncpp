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
//PLACEHOLDER FUNC
// int yr{ 1990 };
//     int count{0};
//     while (yr <= 2026)
//     {
//         // print the number (pad numbers under 10 with a leading 0 for formatting purposes)
//         std::cout <<  "On year " << yr << " you are: ";
//         if (count < 10)
//         {
//             std::cout << '0';
//         }

//         std::cout << count << ' ' << '\n';

//         // if the loop variable is divisible by 10, print a newline
//         if ((count > 1) & (count % 10 == 0))
//         {;
//             // std::cout << '\n';
//         }

//         // increment the loop counter

//         ++count;
//         ++yr;
//     }
template <typename PH>
PH max(PH x, PH y){
    return (x < y) ? y : x;
}

int main(){
    std::cout << max<double>(1,2);

    





    
    return 0;
}

struct Fraction{
    int numerator {};
    int denominator {1};
};

Fraction createFractionObject(){
    Fraction temp {};
    std::cout << "Enter a value for the numerator: ";
    std::cin >> temp.numerator;
    std::cout << "Enter a value for the denominator: ";
    std::cin >> temp.denominator;

    return temp;
}

constexpr Fraction multiply(const Fraction& f1, const Fraction& f2){
    return {f1.numerator * f2.numerator, f2.denominator * f1.denominator};
}

void printFraction(const Fraction& f){
    std::cout << f.numerator << "/" << f.denominator;
}

int main(){
    Fraction obj1 {createFractionObject()};
    Fraciton obj2 {createFractionObject()};

    printFraction(multiply((obj1, obj2));
}
