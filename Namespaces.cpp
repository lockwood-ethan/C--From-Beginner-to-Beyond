#include <iostream> // Preprocessor

// Why std::cout and not just cout?
// A: Namespaces are used to reduce the likelihood of naming conflicts

namespace first {
	int favorite_number {1};
}

// OR

using namespace std; // Use the entire std namespace

// OR

using std::cout; // Use only what you need
using std::cin;
using std::endl;

int main()
{
	int favorite_number {20};

	cout << "This is the local variable: " << favorite_number << endl;

	cout << "Enter your favorite number between 1 and 100: ";

	cin >> first::favorite_number;

	cout << "Amazing!! That's my favorite number too!" << endl;
	cout << "No really!!, " << first::favorite_number << " is my favorite number!" << endl;

	return 0;
}

