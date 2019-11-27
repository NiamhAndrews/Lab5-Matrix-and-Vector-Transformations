#include "Quaternion.h"



Quaternion::Quaternion()
{
	w = 0; x = 0; y = 0; z = 0;
}
Quaternion::Quaternion(double _w, double _x, double _y, double _z)
{
	w = _w; x = _x; y = _y; z = _z;
}

Quaternion::Quaternion(double _w, Vector3 v)
{
	w = _w; x = v.x; y = v.y; z = v.z;
}


std::string Quaternion::ToString()
{
	return "(" + std::to_string(w) + "g3" + "," + std::to_string(x) + "g3" + "i," + std::to_string(y) + "g3" + "j," + std::to_string(z) + "g3" + "k)";
}



double Quaternion::Modulus()
{ 
	return sqrt(w * w + x * x + y * y + z * z);
}



Quaternion Quaternion::Normalise()
{
	double m = w * w + x * x + y * y + z * z;
	if (m > 0.001)
	{
		m = sqrt(m);
		return Quaternion(w / m, x / m, y / m, z / m);
	}
	else
	{
		return Quaternion(1, 0, 0, 0);
	}
}

Quaternion Quaternion::Conjugate()
{
	return Quaternion(w, -x, -y, -z);
}

void Quaternion::FromAxisAngle(Vector3 axis, double angleRadian)
{
	double m = axis.Length();
	if (m > 0.0001)
	{
		double ca = cos(angleRadian / 2);
		double sa = sin(angleRadian / 2);
		x = axis.x / m * sa;
		y = axis.y / m * sa;
		z = axis.z / m * sa;
		w = ca;
	}
	else
	{
		w = 1; x = 0; y = 0; z = 0;
	}
}

Quaternion Quaternion::Multiply(Quaternion _q)
{
	double nw = _q.w * w - _q.x * x - _q.y * y - _q.z * z;
	double nx = _q.w * x + _q.x * w + _q.y * z - _q.z * y;
	double ny = _q.w * y + _q.y * w + _q.z * x - _q.x * z;
	double nz = _q.w * z + _q.z * w + _q.x * y - _q.y * x;
	return  Quaternion(nw, nx, ny, nz);
}

Quaternion Quaternion::Copy()
{
	return Quaternion(x, y, z, w);
}
//                  -1
// V'=q*V*q     ,

Vector3 Quaternion::Rotate(Vector3 pt, int _angle)
{
	Quaternion axis, rotate;
	axis = Normalise();
	double angleRad = PI / 180 * _angle;
	rotate = Quaternion(cos(angleRad / 2), sin(angleRad / 2) * axis.x, sin(angleRad / 2) * axis.y, sin(angleRad / 2) * axis.z);
	Quaternion conjugate = rotate.Conjugate();
	Quaternion qNode = Quaternion(0, pt.x, pt.y, pt.z);
	qNode = rotate * qNode * conjugate;
	return Vector3(qNode.x, qNode.y, qNode.z);
}

// Multiplying q1 with q2 is meaning of doing q2 firstly then q1
Quaternion Quaternion::operator +(Quaternion q)
{
	return  Quaternion(w + q.w, x + q.x, y + q.y, z + q.z);
}

Quaternion Quaternion::operator -(Quaternion q1)
{
	return Quaternion(-q1.w, -q1.x, -q1.y, -q1.z);
}

Quaternion Quaternion::operator -(Quaternion q)
{
	return Quaternion(w - q.w, x - q.x, y - q.y, z - q.z);
}

Quaternion Quaternion::operator *(double s)
{
	return Quaternion(w * s, x * s, y * s, z * s);
}
Quaternion Quaternion::operator *(float s)
{
	return Quaternion(w * s, x * s, y * s, z * s);
}
Quaternion Quaternion::operator *(int s)
{
	return Quaternion(w * s, x * s, y * s, z * s);
}
Quaternion Quaternion::operator *(double s)
{
	return Quaternion(w * s, x * s, y * s, z * s);
}
Quaternion Quaternion::operator *(float s)
{
	return Quaternion(w * s, x * s, y * s, z * s);
}
Quaternion Quaternion::operator *(int s)
{
	return  Quaternion(w * s, x * s, y * s, z * s);
}


Quaternion Quaternion::operator *(Quaternion q)
{
	double nw = w * q.w - x * q.x - y * q.y - z * q.z;
	double nx = w * q.x + x * q.w + y * q.z - z * q.y;
	double ny = w * q.y + y * q.w + z * q.x - x * q.z;
	double nz = w * q.z + z * q.w + x * q.y - y * q.x;
	return Quaternion(nw, nx, ny, nz);
}