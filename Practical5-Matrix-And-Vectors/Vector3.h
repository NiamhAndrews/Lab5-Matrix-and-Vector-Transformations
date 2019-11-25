#pragma once
#include <iostream>
#include <string.h>
#include <math.h>

class Vector3
{
public:
	// The class has three variables x, y and z 
	double x;
	double y;
	double z;


	
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
	


	// Constructor 1
	Vector3();

	// Constructor 2
	Vector3(double x1, double y1, double z1);

	// Constructor 3
	Vector3(Vector3 V);



	Vector3 operator +(Vector3 V1, Vector3 V2);


	Vector3 operator -(Vector3 V1, Vector3 V2);


	Vector3 operator -(Vector3 V);

	Vector3 operator *(Vector3 V1, Vector3 V2);

	Vector3 operator *(double k, Vector3 V1);

	Vector3 operator *(float k, Vector3 V1);

	Vector3 operator *(int k, Vector3 V1);


	Vector3 operator ^(Vector3 V1, Vector3 V2);





	double Length();

	double LengthSquared();

	void Normalise();






	std::string ToString();
	
}