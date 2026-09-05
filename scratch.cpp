// #include <iostream>
// #include <string_view>
// #include <cstdint> // for std::uint8_t
// #include <bitset>
// #include <utility>

// #define PASS
// using namespace std::string_view_literals;

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

#undef NDEBUG
#include <cassert> // for assert
#include <iostream>

bool isPrime(int x){
    if (x<=1){
        return false; // less than 1 so, not prime, has to be greater than 1 and only divisible by 1 and itself;
    }

    for (int i{2}; i < x; ++i){
        if(x % i == 0){
            return false; // x is divisible by another number other than 1;
        }
    }
    return true;
}
int main()
{
    assert(!isPrime(0)); // terminate program if isPrime(0) is true
    assert(!isPrime(1));
    assert(isPrime(2));  // terminate program if isPrime(2) is false
    assert(isPrime(3));
    assert(!isPrime(4));
    assert(isPrime(5));
    assert(isPrime(7));
    assert(!isPrime(9));
    assert(isPrime(11));
    assert(isPrime(13));
    assert(!isPrime(15));
    assert(!isPrime(16));
    assert(isPrime(17));
    assert(isPrime(19));
    assert(isPrime(97));
    assert(!isPrime(99));
    assert(isPrime(13417));

    std::cout << "Success!\n";

    return 0;
}

