// // #include <iostream> // lib for basic input and output
// // #define FOO 2

// // int add(int x, int y);
// // int main(){
// // #ifdef FOO
// //     std::cout << FOO << '\n';  
// // #endif
// //     return 0;
// // }
// #include <iostream>
// #include <iomanip>
// #include <climits> // for CHAR_BIT

// int main(){
// 	std::cout << " A byte is " << CHAR_BIT << " bits\n\n";

// 	std::cout << std::left; // left justify output

// 	std::cout << std::setw(16) << "bool:" << sizeof(bool) << " bytes\n";
// 	std::cout << std::setw(16) << "char:" << sizeof(char) << " bytes\n";
// 	std::cout << std::setw(16) << "short:" << sizeof(short) << " bytes\n";
// 	std::cout << std::setw(16) << "int:" << sizeof(int) << " bytes\n";
// 	std::cout << std::setw(16) << "long:" << sizeof(long) << " bytes\n";
// 	std::cout << std::setw(16) << "long long:" << sizeof(long long) << " bytes\n";
//     std::cout << std::setw(16) << "float:" << sizeof(float) << " bytes\n";
//     std::cout << std::setw(16) << "double:" << sizeof(double) << " bytes\n";
//     std::cout << std::setw(16) << "long double:" << sizeof(long double) << " bytes\n";

// 	return 0;
// }
// #include <iostream>

// int main()
// {
//     unsigned short x{ 0 }; // smallest 2-byte unsigned value possible
//     std::cout << "x was: " << x << '\n';

//     x = -65534; // -1 is out of our range, so we get modulo wrap-around
//     std::cout << "x is now: " << x << '\n';

//     x = -2; // -2 is out of our range, so we get modulo wrap-around
//     std::cout << "x is now: " << x << '\n';

//     return 0;
// }
// #include <cstdint> // for fixed-width integers
// #include <iostream>

// int main()
// {
//     std::int8_t x { 2 };   // initialize 8-bit integral type with value 65
//     std::cout << x << '\n'; // You're probably expecting this to print 65

//     return 0;
// }
// #include <iostream>

// int main()
// {
//     std::cout << std::boolalpha;
// 	bool b{}; // default initialize to false
// 	std::cout << "Enter a boolean value: ";
// 	std::cin >> b;
// 	std::cout << "You entered: " << b << '\n';

// 	return 0;
// }

// #include <iostream>

// int main(){
//     std::cout << "Enter an integer: ";
//     int x {};
//     std::cin >> x;

//     if (x == 0){
//         std::cout << "The value is zero\n";
    
//     }
//     else{
//         std::cout << "The value is non-zero\n";
//     }
//     return 0;
// }
// #include <iostream>
// #include <cmath>
// #include <cstdint>

// int getTowerHeight(){
//     int height{};
//     std::cout << "Enter the height of the tower in meters: ";
//     std::cin >> height;
//     return height;
// }

// double calculateBallHeight(double height, int seconds){
//     double fallen {9.8 * (seconds * seconds) /2};
//     double ballheight {height - fallen};

//     if (ballheight < 0.0){
//         return 0.0;
//     }
//     return ballheight;
// }

// void printResult(double ballheight, int seconds){
//     if (ballheight >0.0){
//         std::cout << "At " << seconds << " seconds, the ball is at height: " << ballheight << " meters\n";
//     }
//     else{
//         std::cout << "At " << seconds << " seconds, the ball is on the ground.\n";
//     }
// }

// void output
// int main(){
//     int towerheight {getTowerHeight()};
//     printResult(calculateBallHeight(towerheight, 0),0);
//     printResult(calculateBallHeight(towerheight, 1),1);
//     printResult(calculateBallHeight(towerheight, 5),5);

// }

