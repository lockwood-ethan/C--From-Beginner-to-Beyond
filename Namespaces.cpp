#include <iostream> // Preprocessor

// Why std::cout and not just cout?
// A: Namespaces are used to reduce the likelihood of naming conflicts

using namespace std: // Use the entire std namespace

// OR

using std::cout; // Use only what you need
using std::cin;
using std::endl;

int main()
{
	int favorite_number;

	cout << "Enter your favorite number between 1 and 100: "

	cin >> favorite_number;

	cout << "Amazing!! That's my favorite number too!" << endl;
	cout << "No really!!, " << favorite_number << " is my favorite number!" << endl;

	return 0;
}

