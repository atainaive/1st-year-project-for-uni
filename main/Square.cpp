#include "Square.h"

//calling default constructor and destructor
Square::Square() = default;
Square::~Square() = default;

void Square::GetSides()
{
    cout << "Enter dimension : \n";
    cin >> a;
	if (a <= 0) {
		cout << endl;
		cout << "\t**Error: Side cannot be negative.\n\n";
		cout << "Enter dimension A:\n";
		cin >> a;
	}
}

//calculates area
float Square::CalculateArea()
{
    return a*a;
}

//calculates perimeter
float Square::CalculatePerimeter()
{
    return a*4;
}

//prints out answer
void Square::Print(ostream& out)
{
    out << "\nPerimeter: " << Square::CalculatePerimeter() << "\n" << "Area: " << Square::CalculateArea() << "\n";
}

//runs program
void Square::Run() {
	Square::GetSides();
	Square::Print(cout);
}