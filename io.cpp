#include <iostream>
using namespace std;


int readNumber(){

    cout << "Enter a single integer: " << '\n';
    int x{};
    cin >> x;
    
    return x;

}

void writeAnswer(int x){
    cout << "Answer is: " << x << '\n';
}
