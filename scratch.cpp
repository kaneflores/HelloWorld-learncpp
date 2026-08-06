// #include <iostream> // lib for basic input and output
// #define FOO 2

// int add(int x, int y);
// int main(){
// #ifdef FOO
//     std::cout << FOO << '\n';  
// #endif
//     return 0;
// }
#include <iostream>

void printValue(int value)
{
    std::cout << value << '\n';
}

int main()
{
    printValue(5);
    printValue(6);
    printValue(7);

    return 0;
}
