#pragma once
#include <iostream>
#include "Vector3.h"
#include <string>
#include <math.h>
#define PI           3.14159265358979323846


class Vector2
{
public:
	// The class has three variables x, y
	float x;
	float y;



	// Constructor 1
	Vector2();

	// Constructor 2
	Vector2(float x1, float y1);

	Vector2(Vector2 V, Vector2 V2);



	Vector2 operator +(Vector2 V);


	Vector2 operator -(Vector2 V);


	Vector2 operator -();

	float operator *(Vector2 V1);

	Vector2 operator *(double k);

	Vector2 operator *(float k);

	Vector2 operator *(int k);



	float Length();

	float LengthSquared();

	void Normalise();

	void Rotate(Vector2 pt, int t_angle);


	std::string ToString();

};