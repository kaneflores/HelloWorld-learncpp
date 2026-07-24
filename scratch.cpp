#include <iostream> // lib for basic input and output
#define FOO 

int add(int x, int y);
int main(){
    #ifdef FOO
    std::cout << FOO << '\n';
    #endif
    return 0;
}
