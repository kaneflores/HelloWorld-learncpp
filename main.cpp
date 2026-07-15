#include <iostream>
#include <limits>

using namespace std;

/*

*/

int main(){
    cout << "Hello World" << endl
        << "Apfel" << endl;
    cin.clear(); // reset any error flags
    cin.ignore(numeric_limits<streamsize>::max(), '\n'); // ignore any characters in the input buffer until we find a newline
    cin.get(); // get one more char from the user (waits for user to press enter)
    return 0;
    
}