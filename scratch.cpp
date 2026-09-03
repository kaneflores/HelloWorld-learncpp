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
int main(){
    int count{ 0 }; // count how many times the loop iterates
    bool keepLooping { true }; // controls whether the loop ends or not
    while (keepLooping)
    {
        std::cout << "Enter 'e' to exit this loop or any other character to continue: ";
        char ch{};
        std::cin >> ch;

        if (ch == 'e')
            keepLooping = false;
        else
        {
            ++count;
            std::cout << "We've iterated " << count << " times\n";
        }
    }
    
    return 0;
}


