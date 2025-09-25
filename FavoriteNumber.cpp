#include <iostream>
/* This is a multi line comment and is like
 * TOTALLY SICK!!! (Dope)
 * or whatever, I guess. */

/*********************
* Author: Ethan Lockwood
* 11/11/2017 Ethan - Fixed bug in...
* 11/12/2017 Joe - Unfixed that bug because Ethan is an idiot
**********************/ //(Creating a header is fine but using this for version control is not good)

// This is a single line comment

// Using a modified version of Dijkstra's algorithm to improve space efficiency (good comment)

int main() {
	int favorite_number; // This is where my favorite number is stored (unnecessary comment)
	std::cout << "Enter your favorite number between 1 and 100: ";
	std::cin >> favorite_number;
	std::cout << "Amazing!! That's my favorite number too! " << std::endl;
	std::cout << "No really!!, " << favorite_number << " is my favorite number!" << std::endl;
	return 0; // return 0 (bad comment)
}
