#include "Arithmetic.h"

//calling default constructor and destructor
Arithmetic::Arithmetic() = default;
Arithmetic::~Arithmetic() = default;

//inputs data and declares them inside class for future operations
void Arithmetic::Input(istream & in)
{
	cout << "Input first variable: ";
	in >> this->a;
	cout << "Input second variable: ";
	in >> this->b;
}

// + function
void Arithmetic::Add() {
	cout << "\nAnswer: " << a + b << endl;;
}

// - function
void Arithmetic::Sub()
{
	cout << "\nAnswer: " << a - b << endl;;
}

// * function
void Arithmetic::Mul()
{
	cout << "\nAnswer: " << a * b << endl;;
}

// / function
void Arithmetic::Div()
{
	cout << "\nAnswer: " << a / b << endl;;
}

//function to print selection choice
void Arithmetic::Print()
{
	cout << "\n=================================================================================================== \n";
	cout << "*                                Arithmetic                                                       * ";
	cout << "\n=================================================================================================== \n\n";
	cout << "                          Please select the expression                                      \n";
	cout << "\n[1].Add\n";
	cout << "[2].Substract\n";
	cout << "[3].Multiply\n";
	cout << "[4].Divide\n";
	cout << "[0].Exit \n";
}

//function to Run Arithmetic option
void Arithmetic::Run()
{
	int choice;
	bool isValid = true;

	while (isValid) {
		Arithmetic::Print();
		cin >> choice;

		if (choice < 0) {
			cout << "\t**Error: Select from 0 to 4.\n\n";
			cin >> choice;
		}

		switch (choice)
		{
		case 1:
			Arithmetic::Input(cin);
			Arithmetic::Add();
			break;
		case 2:
			Arithmetic::Input(cin);
			Arithmetic::Sub();
			break;
		case 3:
			Arithmetic::Input(cin);
			Arithmetic::Mul();
			break;
		case 4:
			Arithmetic::Input(cin);
			Arithmetic::Mul();
			break;
		case 0:
			isValid = false;
			break;
		}
	}
}