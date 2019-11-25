#include "Vector3.h"



		
// The class has three variables x, y and z 
double x;
double y;
double z;

/*
double X
{
	get { return x; }
	set { x = value; }
}
double Y
{
	get { return y; }
	set { y = value; }
}
double Z
{
	get { return z; }
	set { z = value; }
}
*/

// Constructor 1
Vector3::Vector3() :
	x{ 0.0f },
	y{ 0.0f },
	z{ 0.0f }
{
}


// Constructor 2
Vector3::Vector3(double x1, double y1, double z1)
{ // To allow other values for X, Y and Z to be declared
	x = x1;
	y = y1;
	z = z1;
}
// Constructor 3
Vector3::Vector3(Vector3 V, Vector3 V2)
{  // To allow other values for X, Y and Z to be declared
	x = V.x;
	y = V.y;
	z = V.z;
	x = V2.x;
	y = V2.y;
	z = V2.z;
}

Vector3::Vector3(Vector3 V)
{  // To allow other values for X, Y and Z to be declared
	x = V.x;
	y = V.y;
	z = V.z;
}





//trying something
Vector3 Vector3::operator +(Vector3 V1, Vector3 V2)
{  // An overloaded operator + to return the sum of 2 vectors
	return new Vector3(V1.x + V2.x, V1.y + V2.y, V1.z + V2.z);
}
//Trying something
Vector3 Vector3::operator-(Vector3 V)
{
	return Vector3();
}






static Vector3 operator -(Vector3 V1, Vector3 V2)
{ // An overloaded operator - to return the difference of 2 vectors
	return new Vector3(V1.x - V2.x, V1.y - V2.y, V1.z - V2.z);
}

static Vector3 operator -(Vector3 V)
{// An overloaded operator - to return the negation of a single vector
	Vector3 V1 = new Vector3();
	V1.x = -V.x;
	V1.y = -V.y;
	V1.z = -V.z;
	return V1;
}

static double operator *(Vector3 V1, Vector3 V2)
{// An overloaded operator * to return the scalar product of 2 vectors
	return (V1.x * V2.x + V1.y * V2.y + V1.z * V2.z);
}

static Vector3 operator *(double k, Vector3 V1)
{// An overloaded operator * to return the product of a scalar by a vector
	return new Vector3(V1.x * (float)k, V1.y * (float)k, V1.z * (float)k);
}

static Vector3 operator *(float k, Vector3 V1)
{// An overloaded operator * to return the product of a scalar by a vector
	return new Vector3(V1.x * k, V1.y * k, V1.z * k);
}

static Vector3 operator *(int k, Vector3 V1)
{// An overloaded operator * to return the product of a scalar by a vector
	return new Vector3(V1.x * k, V1.y * k, V1.z * k);
}

static Vector3 operator ^(Vector3 V1, Vector3 V2)
{// An overloaded operator ^ to return the vector product of 2 vectors
	return new Vector3(V1.y * V2.z - V1.z * V2.y, V1.z * V2.x - V1.x * V2.z, V1.x * V2.y - V1.y * V2.x);
}


double Vector3::Length()
{
	// A method to return the length of the vector
	return sqrt(x * x + y * y + z * z);
}

double Vector3::LengthSquared()
{
	// A method to return the length squared of the vector
	return (x * x + y * y + z * z);
}

void Vector3::Normalise()
{
	// A method to reduce the length of the vector to 1.0 
	// keeping the direction the same
	if (Length() > 0.0)
	{  // Check for divide by zero
		double magnit = Length();
		x /= magnit;
		y /= magnit;
		z /= magnit;
	}
}

void Vector3::Rotate(Vector3 pt, int t_angle)
{
}

std::string Vector3::ToString()
{
	 std::string output = "(" + std::to_string(x) + "g3" + "," + std::to_string(y) + "g3" + "," + std::to_string(z) + "g3" + ")";
	 return output;
}