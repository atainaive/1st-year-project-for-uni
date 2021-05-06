#include "Triangle.h"

//calling default constructor and destructor
Triangle::Triangle() = default;
Triangle::~Triangle() = default;

//inputs data as sides of a shapes and declares them inside class for future operations
void Triangle::GetSides()
{
	cout << "Enter dimension A:\n";
	cin >> a;
	cout << "Enter dimension B:\n";
	cin >> b;
	cout << "Enter dimension C:\n";
	cin >> c;

	if (a <= 0 || b <= 0 || c <=0) {
		cout << endl;
		cout << "\t**Error: Side cannot be negative.\n\n";
		cout << "Enter dimension A:\n";
		cin >> a;
		cout << "Enter dimension B:\n";
		cin >> b;
		cout << "Enter dimension C:\n";
		cin >> c;
	}
}

//calculates perimeter
float Triangle::CalculatePerimeter()
{
	return a + b + c;
}

//calculates area
float Triangle::CalculateArea()
{
	S = a + b + c;
	return sqrt(S * (S - a) * (S - b) * (S - c));
}

//prints out answer
void Triangle::Print(ostream& out)
{
	out << "\nPerimeter: " << Triangle::CalculatePerimeter() << "\n" << "Area: " << Triangle::CalculateArea() << "\n";
}

//runs program
void Triangle::Run() {
	Triangle::GetSides();
	Triangle::Print(cout);
}