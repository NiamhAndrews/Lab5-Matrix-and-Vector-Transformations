#pragma once
#include "string"
#include "Vector3.h"
#include "Matrix3.h"
#include <math.h>

class Quaternion
{
public:

	float x, y, z, w;

	Quaternion();

	Quaternion(float _w, float _x, float _y, float _z);

	Quaternion(float _w, Vector3 v);

	std::string ToString();


	float Modulus();

	Quaternion Normalise();

	Quaternion Conjugate();

	void FromAxisAngle(Vector3 axis, float angleRadian);

	Quaternion Multiply(Quaternion _q);

	Quaternion Copy();

	Vector3 Rotate(Vector3 pt, int _angle);

	// Multiplying q1 with q2 is meaning of doing q2 firstly then q1
	Quaternion operator +(Quaternion q);

	Quaternion operator -();

	Quaternion operator -(Quaternion q);

	Quaternion operator *(double s);

	Quaternion operator *(float s);

	Quaternion operator *(int s);

	Quaternion operator *(Quaternion q);

};