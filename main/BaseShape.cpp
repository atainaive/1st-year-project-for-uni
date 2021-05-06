#include "BaseShape.h"

BaseShape::BaseShape() = default;
BaseShape::~BaseShape() = default;

void BaseShape::Print(ostream & out)
{
	cout << "This is never used";
}

ostream& operator<<(ostream& out, BaseShape& baseShape)
{
	baseShape.Print(out);
	return out;
}


