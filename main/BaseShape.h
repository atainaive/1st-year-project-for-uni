#pragma once
#include "IShape.h"

//Base class for for Geometry option in main menu and also for selection as Square, Rectangle, Triangle and Circle files/options in the program
class BaseShape : public IShape
{
public:
	BaseShape();
	virtual  ~BaseShape(); //calling virtual destructor to prevent data from leaking
	friend ostream& operator << (ostream& out, BaseShape& baseShape); // using operator as Polymorphism, printing out information depending on what kind of selection it was
	void Print(ostream& out) override; //function for Polymorphism
};

