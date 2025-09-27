#include <iostream>

using namespace std;

// This program will calculate the area of a room in square feet

int main() {
//	int room_width {0};
//	int room_length {0};

	cout << "Enter the width of the room: ";
	int room_width {0};
	cin >> room_width;

	cout << "Enter the length of the room: ";
	int room_length {0};
	cin >> room_length;

	int room_area {room_width * room_length};

	cout << "The area of the room is " << room_area << " square feet." << endl;

	const double PI = 3.14159;
	double radius = 10;
	double circumference = 2 * PI * radius;

	std::cout << circumference << "cm";

	const int LIGHT_SPEED = 299792458;

	return 0;
}
