#include <iostream> // lib for basic input and output

using namespace std;

int main(){
    cout << "Enter an integer: ";

    int num{};
    cin >> num;

    cout << " Double " << num << " is:" << num * 2 << '\n';
    cout << " Triple " << num << " is:" << num * 3;
}
