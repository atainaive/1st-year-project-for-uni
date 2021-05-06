#pragma once
#include <iostream>
#include <cmath>
#include <iomanip>

using std::cout;
using std::cin;
using std::endl;
using std::istream;
using std::ostream;

//Interface for Arithmetic, Trigonometry and Binary files/options in the program
class ICalculator {
public:
	virtual void Run() = 0;
};

