#pragma once
#include <iostream>
#include <cmath>

using std::cout;
using std::cin;
using std::endl;
using std::istream;
using std::ostream;

//Interface for Geometry option in main menu and also for selection as Square, Rectangle, Triangle and Circle files/options in the program
class IShape {
public:
	virtual void GetSides() = 0; //pure function to getSides for "shapes"
	virtual float CalculateArea() = 0; //pure function to calculate area of a shape
	virtual float CalculatePerimeter() = 0; //pure function to calculate perimeter of a shape
	virtual void Print(ostream& out) = 0; //pure function to print answres for a shape
	virtual void Run() = 0; //pure function to run program
};