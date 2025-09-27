#include <iostream>
#include <vector>

/*
* typedef = reserved keyword used to create an additional name
* (alias) for another data type.
* New identifier for an existing type
* Helps with readability and reduces typos
*/

// typedef std::vector<std::pair<std::string, int>> pairlist_t;
// typedef std::string text_t;
// typedef int number_t;


// typedef has been replaced with 'using' (work better w/ templates)

using text_t = std::string;
using number_t = int;

int main() {

//	pairlist_t pairlist;
	
	text_t firstName = "Ethan";
	number_t age = 35;

	std::cout << firstName << '\n';
	std::cout << age << '\n';

	return 0;
}
