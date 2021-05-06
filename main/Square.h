#pragma once
#include "BaseShape.h"

class Square : public BaseShape
{
private:
	float a{}; // declaring default variable
protected:
	//overriden function for calculations/ getting values and printing answers
	float CalculateArea() override;
	float CalculatePerimeter() override;
	void GetSides() override;
	void Print(ostream& out) override;
public:
	//calling default constructor and destructor
	Square();
	~Square();
	void Run() override;//function to run a program
};

