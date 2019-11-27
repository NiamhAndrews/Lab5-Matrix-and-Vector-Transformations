#pragma once
#include <iostream>
#include <string>
#include <math.h>
#define PI           3.14159265358979323846

class Vector3
{
public:
	// The class has three variables x, y and z 
	double x;
	double y;
	double z;



	// Constructor 1
	Vector3();

	// Constructor 2
	Vector3(double x1, double y1, double z1);

	Vector3(Vector3 V, Vector3 V2);



	Vector3 operator +(Vector3 V);


	Vector3 operator -(Vector3 V);


	Vector3 operator -();

	double operator *(Vector3 V1);

	Vector3 operator *(double k);

	Vector3 operator *(float k);

	Vector3 operator *(int k);


	Vector3 operator ^(Vector3 V);





	double Length();

	double LengthSquared();

	void Normalise();

	void Rotate(Vector3 pt, int t_angle);




	std::string ToString();

};