#include <iostream>

int main() {
	long float value, value2, request;
	start: {
		std::cout << "Enter 1 for multiplication, 2 for addition, or 3 for divison." << std::endl;
		std::cin >> request;
		if (!std::cin) {
			std::cout << "\n" << std::endl;
			std::cout << "Error! Integer(s) were not numeric! Please try again.. " << std::endl;
			std::cout << "\n" << std::endl;
			std::cin.clear();
			std::cin.ignore(10000, '\n');
			goto start;
		}
		if (request == 1) {
			std::cout << "\n" << std::endl;
			std::cout << "Multiplication has been selected!" << std::endl;
			std::cout << "\n" << std::endl;
			std::cout << "Enter two integers to multiply" << std::endl;
			std::cout << "\n" << std::endl;
			std::cin >> value >> value2;
			if (!std::cin) {
				std::cout << "\n" << std::endl;
				std::cout << "Error! Integer(s) were not numeric! Please try again.. " << std::endl;
				std::cout << "\n" << std::endl;
				std::cin.clear();
				std::cin.ignore(10000, '\n');
				goto start;
			}
			std::cout << "\n" << std::endl;
			std::cout << value << " x " << value2 << " = " << value * value2 << std::endl;
			std::cout << "\n" << std::endl;
			goto start;
		}
		if (request == 2) {
			std::cout << "\n" << std::endl;
			std::cout << "Addition has been selected!" << std::endl;
			std::cout << "\n" << std::endl;
			std::cout << "Enter two integer to add" << std::endl;
			std::cout << "\n" << std::endl;
			std::cin >> value >> value2;
			if (!std::cin) {
				std::cout << "\n" << std::endl;
				std::cout << "Error! Integer(s) were not numeric! Please try again.. " << std::endl;
				std::cout << "\n" << std::endl;
				std::cin.clear();
				std::cin.ignore(10000, '\n');
				goto start;
			}
			std::cout << "\n" << std::endl;
			std::cout << value << " + " << value2 << " = " << value + value2 << std::endl;
			std::cout << "\n" << std::endl;
			goto start;
		}
		if (request == 3) {
			std::cout << "\n" << std::endl;
			std::cout << "Division has been selected!" << std::endl;
			std::cout << "\n" << std::endl;
			std::cout << "Enter dividend than divsor" << std::endl;
			std::cout << "\n" << std::endl;
			std::cin >> value >> value2;
			if (!std::cin) {
				std::cout << "\n" << std::endl;
				std::cout << "Error! Integer(s) were not numeric! Please try again.. " << std::endl;
				std::cout << "\n" << std::endl;
				std::cin.clear();
				std::cin.ignore(10000, '\n');
				goto start;
			}
			std::cout << "\n" << std::endl;
			std::cout << value << " / " << value2 << " = " << value / value2 << std::endl;
			std::cout << "\n" << std::endl;
			goto start;
		}
		else {
			std::cout << "\n" << std::endl;
			std::cout << "Unknown Operator: Please try again." << std::endl;
			std::cin.clear();
			std::cin.ignore(10000, '\n');
			goto start;
		}
	}

return 0;
}