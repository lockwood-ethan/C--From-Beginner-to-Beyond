#include <iostream>

int main() {
	int num1 = 102;

	if (num1 == 100) {
		std::cout << "The number is " << num1 << std::endl;
	} else {
		std::cout << "You messed up dude, it's " << num1 << std::endl;
	}

	while (num1 > 100) {
		// if (num1 == 101) {
		// 	std::cout << "We are going to skip output for 101" << std::endl;
		// 	continue;
		// }
		std::cout << "The number " << num1 << " is greater than 100, let's see if subtracting 1 will fix it." << std::endl;
		num1--;
		if (num1 == 103) {
			std::cout << "There was an error: 404-PEBKAC" << std::endl;
			break;
		}
	}

	std::cout << "It worked! The number is now " << num1 << std::endl;

	std::string text;

	do {
		std::cout << "Hint: the password is Password" << std::endl;
		std::cout << "Enter the password: ";
		std::cin >> text;
	} while (text != "Password");

	for (char c : text) {
		std::cout << "{" << c << "}";
	}

	std::cout << std::endl;

	for (int x = 0; x < 5; x++) {
		num1++;
		std::cout << "Currently, the number is " << num1 << std::endl;
	}

// This is something new that I have not seen in other languages, goto jumps the program execution to a previously defined label and contiues from there.
mylabel:
	num1--;
	std::cout << "Currently, the number is " << num1 << std::endl;
	if (num1 > 100) goto mylabel;
	std::cout << "The number is now " << num1 << " again." << std::endl;

	return 0;
}
