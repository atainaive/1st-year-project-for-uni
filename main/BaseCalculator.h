#pragma once
#include "ICalculator.h"

//Base class for Arithmetic, Trigonometry and Binary files/options in the program
class BaseCalculator : public ICalculator
{
public:
	BaseCalculator();
	virtual ~BaseCalculator(); // calling virtual destructor to prevent data from leaking
	friend istream& operator >> (istream &in, BaseCalculator &basecalculator); // using operator as Polymorphism, inputing variables depending on what selection it was
	virtual void Input(istream& in);
	void Print();
};

