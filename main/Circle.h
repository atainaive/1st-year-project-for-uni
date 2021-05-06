#pragma once
#include "BaseShape.h"

class Circle : public BaseShape
{
private:
	float r{}; // declaring default variable
	const float Pi = 3.1415926535897; // declaring constant variable needed for calculations
protected:
	//overriden function for calculations/ getting values and printing answers
	float CalculateArea() override;
	float CalculatePerimeter() override;
	void GetSides() override;
	void Print(ostream& out) override;
public:
	//calling default constructor and destructor
	Circle();
	~Circle();
	void Run() override; //function to run a program
};

