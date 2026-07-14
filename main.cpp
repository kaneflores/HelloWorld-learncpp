#include <iostream>
#include <limtis>

using namespace std;

/*

*/

int main(){
    cout << "Hello World" << endl
        << "This worked too" << endl;
    cin.clear(); // reset any error flags
    cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // ignore any characters in the input buffer until we find a newline
    cin.get(); // get one more char from the user (waits for user to press enter)
    return 0;
}