#include <iostream> // lib for basic input and output

using namespace std;

int main(){
    cout << "Enter an integer: \n";

    int num{};                                                  // define variable num as an integer variable
    cin >> num;                                                 // get integer value from user's keyboard

    cout << "Double that number is: " << num * 2 << '\n';     // then print the value of that variable here

    

    return 0;
}
