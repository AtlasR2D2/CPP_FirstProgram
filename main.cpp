#include <iostream>
#include <string>

int main(){
	int fave_num;
	std::cout << "Enter your favourite number between 1 and 100: ";
	std::cin >> fave_num;
	std::cout << "Amazing!!! That's my favourite number too!" << std::endl;
//	std::cout << "No really!! " + std::to_string(fave_num) + " is my favourite number!" << std::endl;
	std::cout << "No really!! " << std::to_string(fave_num) << " is my favourite number!" << std::endl;
	return 0;
}