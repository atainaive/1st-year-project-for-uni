#include "BaseCalculator.h"

//calling default constructor and destructor
BaseCalculator::BaseCalculator() = default;
BaseCalculator::~BaseCalculator() = default;

//declaring function, never was called in main program, just to be inherited by children
void BaseCalculator::Input(istream& in)
{
	cout << "Input something";
}

//declaring function, never was called in main program, just to be inherited by children x2
void BaseCalculator::Print()
{
	cout << "pretend to print\n";
}

//Polymorphism, input data depending on what type or in what selection
istream& operator>> (istream& in, BaseCalculator& basecalculator)
{
	basecalculator.Input(in);
	return in;
}

