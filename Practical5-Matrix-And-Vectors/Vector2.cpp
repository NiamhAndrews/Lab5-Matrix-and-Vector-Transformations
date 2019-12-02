#include "Vector2.h"




// Constructor 1
Vector2::Vector2() :
	x{ 0.0f },
	y{ 0.0f }
{
}


// Constructor 2
Vector2::Vector2(float x1, float y1)
{ // To allow other values for X and Y  to be declared
	x = x1;
	y = y1;
}
// Constructor 3
Vector2::Vector2(Vector2 V, Vector2 V2)
{  // To allow other values for X, Y and Z to be declared
	x = V.x;
	y = V.y;
	x = V2.x;
	y = V2.y;
}




//trying something
Vector2 Vector2::operator +(Vector2 V)
{  // An overloaded operator + to return the sum of 2 vectors
	return Vector2(x + V.x, y + V.y);
}



Vector2 Vector2::operator -(Vector2 V)
{ // An overloaded operator - to return the difference of 2 vectors
	return Vector2(x - V.x, y - V.y);
}


Vector2 Vector2::operator -()
{// An overloaded operator - to return the negation of a single vector
	return { -x, -y};
}


float Vector2::operator *(Vector2 V)
{// An overloaded operator * to return the scalar product of 2 vectors
	return (x * V.x + y * V.y);
}

Vector2 Vector2::operator *(double k)
{// An overloaded operator * to return the product of a scalar by a vector
	return Vector2(x * (float)k, y * (float)k);
}

Vector2 Vector2::operator *(float k)
{// An overloaded operator * to return the product of a scalar by a vector
	return Vector2(x * k, y * k);
}

Vector2 Vector2::operator *(int k)
{// An overloaded operator * to return the product of a scalar by a vector
	return Vector2(x * k, y * k);
}


float Vector2::Length()
{
	// A method to return the length of the vector
	return sqrt(x * x + y * y);
}

float Vector2::LengthSquared()
{
	// A method to return the length squared of the vector
	return (x * x + y * y);
}

void Vector2::Normalise()
{
	// A method to reduce the length of the vector to 1.0 
	// keeping the direction the same
	if (Length() > 0.0)
	{  // Check for divide by zero
		float magnit = Length();
		x /= magnit;
		y /= magnit;
	}
}


std::string Vector2::ToString()
{
	std::string output = "( " + std::to_string(x) + ", " + std::to_string(y) + " )";
	return output;
}