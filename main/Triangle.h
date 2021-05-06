#pragma once
#include "BaseShape.h"

class Triangle : public BaseShape
{
private:
	float a{}, b{}, c{}, S{}; // declaring default variables
protected:	
	//overriden function for calculations/ getting values and printing answers
	float CalculateArea() override;
	float CalculatePerimeter() override;
	void GetSides() override;
	void Print(ostream& out) override;
public:
	//calling default constructor and destructor
	Triangle();
	~Triangle();
	void Run() override; //function to run a program
};

