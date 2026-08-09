// // #include <iostream> // lib for basic input and output
// // #define FOO 2

// // int add(int x, int y);
// // int main(){
// // #ifdef FOO
// //     std::cout << FOO << '\n';  
// // #endif
// //     return 0;
// // }
#include <iostream>
#include <iomanip>
#include <climits> // for CHAR_BIT

int main(){
	std::cout << " A byte is " << CHAR_BIT << " bits\n\n";

	std::cout << std::left; // left justify output

	std::cout << std::setw(16) << "bool:" << sizeof(bool) << " bytes\n";
	std::cout << std::setw(16) << "char:" << sizeof(char) << " bytes\n";
	std::cout << std::setw(16) << "short:" << sizeof(short) << " bytes\n";
	std::cout << std::setw(16) << "int:" << sizeof(int) << " bytes\n";
	std::cout << std::setw(16) << "long:" << sizeof(long) << " bytes\n";
	std::cout << std::setw(16) << "long long:" << sizeof(long long) << " bytes\n";
    std::cout << std::setw(16) << "float:" << sizeof(float) << " bytes\n";
    std::cout << std::setw(16) << "double:" << sizeof(double) << " bytes\n";
    std::cout << std::setw(16) << "long double:" << sizeof(long double) << " bytes\n";

	return 0;
}
