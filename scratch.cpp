#include <iostream>
#include <string_view>
#include <cstdint> // for std::uint8_t
#include <bitset>
#include <utility>

#define PASS
using namespace std::string_view_literals;

// namespace examplefunc{ // defined in the global scope
//     int g_examplevar{}; // defined in namespace but still global if called examplefunc::examplevar
// }

// int getValue(){
//     std::cout << "Enter a number: ";
//     int x{};
//     std::cin >> x;
//     return x;
// }

// std::bitset<4> rotl(std::bitset<4> bits){
    
//     return (bits << 1) | (bits >> 3);
// }

// namespace constants{
//     constexpr int minRideHeightCM {140};
// }

// void foo(int x, int y){
//     if (x>y){
//         PASS;
//     }
//     else{
//         PASS;
//     }
// }
// //PLACEHOLDER FUNC
// // int yr{ 1990 };
// //     int count{0};
// //     while (yr <= 2026)
// //     {
// //         // print the number (pad numbers under 10 with a leading 0 for formatting purposes)
// //         std::cout <<  "On year " << yr << " you are: ";
// //         if (count < 10)
// //         {
// //             std::cout << '0';
// //         }

// //         std::cout << count << ' ' << '\n';

// //         // if the loop variable is divisible by 10, print a newline
// //         if ((count > 1) & (count % 10 == 0))
// //         {;
// //             // std::cout << '\n';
// //         }

// //         // increment the loop counter

// //         ++count;
// //         ++yr;
// //     }
// int main(){
    


//     return 0;
// }

namespace Constants{
    constexpr double gravity {9.8};
}

// Gets tower height from user and returns it
double getTowerHeight(){
    std::cout << "Enter the height of the tower in meters: ";
    double towerHeight{};
    std::cin >> towerHeight;
    return towerHeight;
}

//Return the current ball height after "seconds" seconds
double calculateBallHeight(double towerHeight, int seconds){

    // Using formula: s = (u * t) + (a * t^2) / 2
	// here u (initial velocity) = 0, so (u * t) = 0
    const double fallDistance {Constants::gravity * (seconds * seconds) / 2.0};
    const double ballHeight {towerHeight - fallDistance};

    // If the ball would be under the ground, place it on the ground
    if (ballHeight < 0.0){
        return 0.0;
    }

    return ballHeight;
}

void printBallHeight(double ballHeight, int seconds){

    if (ballHeight > 0.0){
        std::cout << "At " << seconds << " seconds, the ball is at height: " << ballHeight << " meters\n";
    }
    else{
        std::cout << "At " << seconds << " seconds, the ball is on the ground.\n";
    }
}

// Calculates the current ball height and then prints it
// This is a helper function to make it easier to do this
double calculateAndPrintBallHeight(double towerHeight, int seconds){
    const double ballHeight{calculateBallHeight(towerHeight, seconds)};
    printBallHeight(ballHeight, seconds);

    return ballHeight;
}

int main(){
    const double towerHeight{ getTowerHeight()};

    int seconds {0};
    while(calculateAndPrintBallHeight(towerHeight, seconds) > 0.0){
        ++seconds;
    }

	return 0;
}
