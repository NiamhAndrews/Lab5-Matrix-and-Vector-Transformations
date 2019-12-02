// Niamh Andrews
// C00242944
// 25/11/2019

#include <iostream>
#include "Vector2.h"
#include "Vector3.h"
#include "Matrix3.h"
#include "Quaternion.h"





int main()
{
	Vector2 vector2One;
	Vector2 vector2Two;
	Vector2 vector2Result;
	Vector3 vector3;
	Matrix3 matrix3;

	float resultFloat;

	std::cout << "Default Constructor " << std::endl;
	std::cout << "\nExpected result : ( 0 ,  0 )";
	std::cout << "\nActual result : " + std::to_string(vector2One.x) << " , " + std::to_string(vector2One.y);
	if (vector2One.x == 0 && vector2One.y == 0)
	{
		std::cout << "\nTest Passed\n\n";
	}
	if (vector2One.x != 0 || vector2One.y != 0)
	{
		std::cout << "\nTest Failed\n\n";
	}
	std::cout << "----------------------------\n\n";


	std::cout << "Vector addition          ";
	vector2One = { 1.0f, 2.0f };
	vector2Two = { 5.0f, 6.0f };
	std::cout << "\nExpected result : ( 6.0     ,8.0  ) \nActual result : ";
	vector2Result = vector2One + vector2Two;
	std::cout << vector2Result.ToString() << std::endl;
	std::cout << "----------------------------" << std::endl;

	std::cout << "Vector subtraction        " << std::endl;
	vector2One = { 7.0, 3.0 };
	vector2Two = { 3.0, 5.0 };
	std::cout << "( 4.0     ,-2.0    )" << std::endl;
	vector2Result = vector2One - vector2Two;
	std::cout << vector2Result.ToString() << std::endl;
	std::cout << "----------------------------" << std::endl;

	std::cout << "Vector multiplication     " << std::endl;
	vector2One = { 5.0, -2.0 };
	std::cout << "(25.0     ,-10.0      )" << std::endl;
	vector2Result = vector2One * 5;
	std::cout << vector2Result.ToString() << std::endl;
	std::cout << "----------------------------" << std::endl;

	std::cout << "Negative vector operator " << std::endl;
	vector2One = { 12.5, 16};
	std::cout << "(-12.5     ,-16       )" << std::endl;
	vector2Result = vector2One * -1;
	std::cout << vector2Result.ToString() << std::endl;
	std::cout << "----------------------------" << std::endl;




	std::cout << "\n\n\n" +vector2One.ToString();
	



	system("PAUSE"); 
}

