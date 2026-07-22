#include <iostream> // lib for basic input and output

using namespace std;

int main(){

    cout << "Enter an integer: ";

    int num{}, num2{};
    cin >> num;

    cout << "Enter another integer: ";
    cin >> num2;

    cout << num << " + " << num2 << " is " << (num + num2) << ".\n";
     cout << num << " - " << num2 << " is " << (num - num2) << ".\n";
}
