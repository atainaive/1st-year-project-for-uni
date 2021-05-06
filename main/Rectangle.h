#pragma once
#include "BaseShape.h"

class Rectangle : public BaseShape
{
private:
	// declaring default variable
	float a{}, b{};
protected:
	//overriden function for calculations/ getting values and printing answers
	float CalculateArea() override;
	float CalculatePerimeter() override;
	void GetSides() override;
	void Print(ostream& out) override;
public:
	//calling default constructor and destructor
	Rectangle();
	~Rectangle();
	void Run() override;//function to run a program
};
