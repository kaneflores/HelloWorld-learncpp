#include <iostream>
#include <string_view>
#include <cstdint> // for std::uint8_t
using namespace std::string_view_literals;

int getValue(){
    std::cout << "Enter a number: ";
    int x{};
    std::cin >> x;
    return x;
}

bool isEven(int x){
    return !(x %2);//!()
}

int main(){
    std::cout << "Enter an integer: ";
    int x{};
    std::cin >> x;

    if (isEven(x)){
        std::cout << x << " is even\n";
    }
    else{
        std::cout << x << " is odd\n";
    }
    return 0;
}
