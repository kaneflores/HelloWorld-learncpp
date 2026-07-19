#include <iostream> // lib for basic input and output

using namespace std;

int main()
{
    std::cout << 5 << '\n'; // print the value of a literal

    int x { 5 };
    std::cout << x << '\n'; // print the value of a variable
    (std::cout << "Hello") << "World\n";
    std::cout << (x ) << '\n';
    return 0;
}
