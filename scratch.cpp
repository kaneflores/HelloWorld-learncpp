#include <iostream> // lib for basic input and output

using namespace std;

void foo2(){
    cout << "in foo2()\n";
}
void foo(){
    cout << "in foo()\n";
    foo2();
}
int main(){
    foo();
    return 0;
}
