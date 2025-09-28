#include <iostream>

int print_sentence(std::string text) {
	std::cout << text << std::endl;
	return 0;
}

int main() {
	std::string text;

	do {
		std::cout << "Enter text: ";
		std::getline(std::cin >> std::ws, text);
		print_sentence(text);
	} while (text != "Quit");
}

