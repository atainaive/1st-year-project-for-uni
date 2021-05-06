#include "Rectangle.h"

//calling default constructor and destructor
Rectangle::Rectangle() = default;
Rectangle::~Rectangle() = default;

//inputs data as sides of a shapes and declares them inside class for future operations
void Rectangle::GetSides()
{
	cout << "Enter dimension A:\n";
	cin >> a;
	cout << "Enter dimension B:\n";
	cin >> b;

	if (a <= 0 || b <= 0) {
		cout << endl;
		cout << "\t**Error: Side cannot be negative.\n\n";
		cout << "Enter dimension A:\n";
		cin >> a;
		cout << "Enter dimension B:\n";
		cin >> b;
	}
}

//calculates area
float Rectangle::CalculateArea()
{
	return a * b;
}

//calculates perimeter
float Rectangle::CalculatePerimeter()
{
	return (a+b)*2;
}

//prints out answer
void Rectangle::Print(ostream& out) {
	out << "\nPerimeter: " << Rectangle::CalculatePerimeter() << "\n" << "Area: " << Rectangle::CalculateArea() << "\n";
}

//runs program
void Rectangle::Run() {
	Rectangle::GetSides();
	Rectangle::Print(cout);
}