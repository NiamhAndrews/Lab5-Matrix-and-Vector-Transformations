#pragma once
#include "string"
#include "Vector3.h"
#include "Matrix3.h"
#include <math.h>

class Quaternion
{
public:

	double x, y, z, w;

	Quaternion();

	Quaternion(double _w, double _x, double _y, double _z);

	Quaternion(double _w, Vector3 v);

	std::string ToString();


	double Modulus();

	Quaternion Normalise();

	Quaternion Conjugate();

	void FromAxisAngle(Vector3 axis, double angleRadian);

	Quaternion Multiply(Quaternion _q);

	Quaternion Copy();

	Vector3 Rotate(Vector3 pt, int _angle);

	// Multiplying q1 with q2 is meaning of doing q2 firstly then q1
	Quaternion operator +(Quaternion q);

	Quaternion operator -(Quaternion q1);

	Quaternion operator -(Quaternion q);

	Quaternion operator *(double s);

	Quaternion operator *(float s);

	Quaternion operator *(int s);

	Quaternion operator *(double s);

	Quaternion operator *(float s);

	Quaternion operator *(int s);

	Quaternion operator *(Quaternion q);

};