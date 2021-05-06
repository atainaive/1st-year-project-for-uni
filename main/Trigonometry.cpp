#include "Trigonometry.h"

//calling default constructor and destructor
Trigonometry::Trigonometry() = default;
Trigonometry::~Trigonometry() = default;

//inputs data as degrees and declares them inside class for future operations
void Trigonometry::Input(istream & in)
{
	cout << "Enter angle in degrees: ";
	in >> this->degrees;
	if (degrees < 0 || degrees>360) {
		cout << "Error, input from 0 to 360: ";
		in >> this->degrees;
	}
}

//function for finding radians to execute other functions
double Trigonometry::GetRadians()
{
	return (double)degrees / 180.0 * (double)Pi ;
}

// Sin function
void Trigonometry::Sin()
{
	double a = sin(Trigonometry::GetRadians());
	if (a <= 1.0 || a >= -1.0) {
		cout << "\nSin: " << std::setprecision(3) << std::fixed
			<< std::setw(6) << sin(Trigonometry::GetRadians()) << "\n";
	}
	else {
		cout << "Undefined\n";
	}
}

// Cos function
void Trigonometry::Cos()
{
	double a = cos(Trigonometry::GetRadians());
	if (a >= -1.0 || a <= 1.0) {
		cout << "\nCos: " << std::setprecision(3) << std::fixed
			<< std::setw(6) << cos(Trigonometry::GetRadians()) << "\n";
	}
	else {
		cout << "Undefined\n";
	}
}

// Tan function
void Trigonometry::Tg()
{
	if (degrees != 90 && degrees != 270) {
		cout << "\nTan: " <<std::setprecision(3) << std::fixed << std::setw(6) << tan(Trigonometry::GetRadians()) << "\n";
	}
	else {
		cout << "Undefined\n";
	}
}
	
//function to print selection choice
void Trigonometry::Print()
{
	cout << "\n=================================================================================================== \n";
	cout << "*                                Triginometry                                                       * ";
	cout << "\n=================================================================================================== \n\n";
	cout << "                          Please select the option                                      \n";
	cout << "\n[1].Sin\n";
	cout << "[2].Cos\n";
	cout << "[3].Tan\n";
	cout << "[0].Exit \n";
}

//function to Run Trigonometry option
void Trigonometry::Run()
{
	int choice;
	bool isValid = true;
	Trigonometry::GetRadians();

	while (isValid) {
		Trigonometry::Print();
		cin >> choice;

		if (choice < 0) {
			cout << "\t**Error: Select from 0 to 3.\n\n";
			cin >> choice;
		}

		switch (choice)
		{
		case 1:
			Trigonometry::Input(cin);
			Trigonometry::Sin();
			break;
		case 2:
			Trigonometry::Input(cin);
			Trigonometry::Cos();
			break;
		case 3:
			Trigonometry::Input(cin);
			Trigonometry::Tg();
			break;
		case 0:
			isValid = false;
			break;
		}
	}
}




