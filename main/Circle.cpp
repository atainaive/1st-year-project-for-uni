#include "Circle.h"

//calling default constructor and destructor
Circle::Circle() = default;
Circle::~Circle() = default;

//inputs data as sides of a shapes and declares them inside class for future operations
void Circle::GetSides()
{
	cout << "Enter dimension : \n";
	cin >> r;
	if (r <= 0) {
		cout << endl;
		cout << "\t**Error: Side cannot be negative.\n\n";
		cout << "Enter dimension A:\n";
		cin >> r;
	}
}

//calculates area
float Circle::CalculateArea()
{
	return Pi * pow(r,2);
}

//calculates perimeter
float Circle::CalculatePerimeter()
{
	return r * 2;
}

//prints out answer
void Circle::Print(ostream& out)
{
	out << "\nDiameter: " << Circle::CalculatePerimeter() << "\n" << "Area: " << Circle::CalculateArea() << "\n";
}

//runs program
void Circle::Run() {
	Circle::GetSides();
	Circle::Print(cout);
}