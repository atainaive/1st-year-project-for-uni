#pragma once
#include "BaseCalculator.h"

//children class, which converts binary number into decimal/octal/hexadecimal numbers.
class Binary : public BaseCalculator
{
private:
	int binary{};// declaring default variable
protected:
	//function for convertion
	void BinToOct();
	void BinToDec();
	void BinToHex();
public:
	//calling default constructor and destructor
	Binary();
	~Binary();
	void Run() override;//function from Interface
	void Input(istream& in) override;// function from Base class, Polymorphism
	void Print();// function from Base class to Print neccesary info
};

