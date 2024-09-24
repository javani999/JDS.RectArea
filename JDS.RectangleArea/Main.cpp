#include <iostream>

using namespace std;

double getlength() {
	double length;
	cout << "Enter the length of the rectangle: ";
	while (!(cin >> length) || length <= 0) {
		cout << "Invalid input. Please enter a positive number: ";
		cin.clear();
		cin.ignore(10000, '\n');
	}
	return length;

}

double getWidth() {
	double width;
	cout << "Enter the width of the rectangle: ";
	while (!(cin >> width) || width <= 0) {
		cout << "Invalid input. Please enter a positive number: ";
		cin.clear();
		cin.ignore(10000, '\n'); 
	}
	return width;
}

double calculateArea(double length, double width) {
	return length * width;
}

void displayArea(double area) {
	cout << "The area of the rectangle is: " << area << '\n';
}

int main() {
	double length = getlength();
	double width = getWidth();
	double area = calculateArea(length, width);
	displayArea(area);
	return 0;
}