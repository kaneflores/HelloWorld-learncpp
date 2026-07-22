#include <iostream> // lib for basic input and output

using namespace std;

int getValueFromUser(){
    cout << "Enter an integer: ";
    int num{ };
    cin >> num;
    return num;
}

void doubleNumber(int x){
    cout << "Doubled number of " << x << " is: " << x * 2 << '\n';
}
int main(){

    int value{getValueFromUser()};
    doubleNumber(value);

    
    return 0;
}

