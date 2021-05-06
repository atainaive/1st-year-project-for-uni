#pragma once
#include "BaseCalculator.h"

//children class, which executes simple arithmetic expressions such as: +, -, *, / .
class Arithmetic : public BaseCalculator
{
private:
	float a{}, b{}; // declaring default variables
protected:
	//functions to calculate
	void Add();
	void Sub();
	void Mul();
	void Div();
public:
	//calling default constructor and destructor
	Arithmetic();
	~Arithmetic();
	void Run() override; //function from Interface
	void Input(istream& in) override;// function from Base class, Polymorphism
	void Print();// function from Base class to Print neccesary info
};

