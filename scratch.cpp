#include <iostream> // lib for basic input and output

using namespace std;

int main(){
    cout << "Enter an integer: \n";

    int num{};      // define variable num as an integer variable
    cin >> num;     // get integer value from user's keyboard

    num = num * 2;

    cout << "Double that number is: " << num << '\n';

    

    return 0;
}
