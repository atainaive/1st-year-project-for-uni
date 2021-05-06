#pragma once
#include "BaseCalculator.h"

//children class, which executes simple trigonometry expressions such as: sin, cos and tan.
class Trigonometry : public BaseCalculator
{
private:
	//declaring variales
	const double Pi = 3.14159265358979323846;
	double degrees{};
protected:
	//functions to execute operations
	double GetRadians();
	void Sin();
	void Cos();
	void Tg();
public:
	//calling default constructor and destructor
	Trigonometry();
	~Trigonometry();
	void Run() override;//function from Interface
	void Input(istream& in) override;// function from Base class, Polymorphism
	void Print();// function from Base class to Print neccesary info
};

