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
	Vector2 vector2One{};
	Vector2 vector2Two{};
	Vector2 vector2Result{};
	Matrix3 matrix3{};

	float resultFloat;



	std::cout << "----------------------------\n";
	std::cout << "Default Constructor ";
	std::cout << "\nExpected result : ( 0 ,  0 )";
	std::cout << "\nActual result : " + std::to_string(vector2One.x) << " , " + std::to_string(vector2One.y);
	if (vector2One.x == 0 && vector2One.y == 0)
	{
		std::cout << "\nTest Passed\n";
	}
	if (vector2One.x != 0 || vector2One.y != 0)
	{
		std::cout << "\nTest Failed\n";
	}

	std::cout << "----------------------------\n";
	std::cout << "Float Constructor ";
	vector2One = { 7.8f, -4.3f };
	std::cout << "\nExpected result : ( 7.8 ,  -4.3 )";
	std::cout << "\nActual result : " + std::to_string(vector2One.x) << " , " + std::to_string(vector2One.y);
	std::cout << "\n----------------------------\n";

	std::cout << "Dual Vector Constructor ";
	vector2One = { -4.3f, 7.8f };
	vector2Two = { -6.3f, 5.25f };
	std::cout << "\nExpected result : ( -4.3,   7.8  )\n( -6.3f, 5.25f );";
	std::cout << "\nActual result : " + std::to_string(vector2One.x) << " , " + std::to_string(vector2One.y) +
		"\n" + std::to_string(vector2Two.x) << " , " + std::to_string(vector2Two.y);
	std::cout << "\n----------------------------\n\n";

	std::cout << "\n----------------------------\n";
	std::cout << "Vector addition          ";
	vector2One = { 1.0f, 2.0f };
	vector2Two = { 5.0f, 6.0f };
	std::cout << "\nExpected result : ( 6.0     ,8.0  ) \nActual result : ";
	vector2Result = vector2One + vector2Two;
	std::cout << vector2Result.ToString() << std::endl;
	std::cout << "----------------------------" << std::endl;

	std::cout << "Vector subtraction        " << std::endl;
	vector2One = { 7.0f, 3.0f };
	vector2Two = { 3.0f, 5.0f };
	std::cout << "( 4.0     ,-2.0    )" << std::endl;
	vector2Result = vector2One - vector2Two;
	std::cout << vector2Result.ToString() << std::endl;
	std::cout << "----------------------------" << std::endl;

	std::cout << "Vector multiplication     " << std::endl;
	vector2One = { 5.0f, -2.0f };
	std::cout << "(25.0     ,-10.0      )" << std::endl;
	vector2Result = vector2One * 5;
	std::cout << vector2Result.ToString() << std::endl;
	std::cout << "----------------------------" << std::endl;

	std::cout << "Vector double multiplication     " << std::endl;
	vector2One = { 5.0f, -2.0f };
	std::cout << "(25.0     ,-10.0      )" << std::endl;
	vector2Result = vector2One * 5;
	std::cout << vector2Result.ToString() << std::endl;
	std::cout << "----------------------------" << std::endl;

	std::cout << "Vector float multiplication     " << std::endl;
	vector2One = { 5.0f, -2.0f };
	std::cout << "(25.0     ,-10.0      )" << std::endl;
	vector2Result = vector2One * 5;
	std::cout << vector2Result.ToString() << std::endl;
	std::cout << "----------------------------" << std::endl;

	std::cout << "Vector int multiplication     " << std::endl;
	vector2One = { 5.0f, -2.0f };
	std::cout << "(25.0     ,-10.0      )" << std::endl;
	vector2Result = vector2One * 5;
	std::cout << vector2Result.ToString() << std::endl;
	std::cout << "----------------------------" << std::endl;

	std::cout << "Negative vector operator " << std::endl;
	vector2One = { 12.5f, 16.0f };
	std::cout << "(-12.5     ,-16       )" << std::endl;
	vector2Result = vector2One * -1;
	std::cout << vector2Result.ToString() << std::endl;
	std::cout << "----------------------------" << std::endl;

	std::cout << "Vector length            " << std::endl;
	vector2One = { 5.0f, 10.0f };
	std::cout << "( 11.180 \t\t)\n";
	resultFloat = vector2One.Length();
	std::cout << std::to_string(resultFloat) << std::endl;
	std::cout << "----------------------------" << std::endl;

	std::cout << "Vector length squared     " << std::endl;
	vector2One = { 7.0f, 8.0f };
	std::cout << "( 123       \t\t)\n";
	resultFloat = vector2One.LengthSquared();
	std::cout << std::to_string(resultFloat) << std::endl;
	std::cout << "----------------------------" << std::endl;

	std::cout << "Normalise Vector          " << std::endl;
	vector2One = { 7.0f, 3.0f };
	std::cout << "( 0.191, 0.393 )\n";
	vector2One.Normalise();
	std::cout << vector2One.ToString() << std::endl;
	std::cout << "----------------------------" << std::endl;


	system("PAUSE");

	//----------------------------------------------------------------------------------


	Vector3 vector3One{};
	Vector3 vector3Two{};
	Vector3 vector3Result{};



	std::cout << "----------------------------\n";
	std::cout << "Default Constructor ";
	std::cout << "\nExpected result : ( 0 ,  0 ,  0)";
	std::cout << "\nActual result : " + std::to_string(vector3One.x) << " , " + std::to_string(vector3One.y) << " , " + std::to_string(vector3One.z);
	if (vector3One.x == 0 && vector3One.y == 0 && vector3One.z == 0)
	{
		std::cout << "\nTest Passed\n";
	}
	if (vector3One.x != 0 || vector3One.y != 0 || vector3One.z != 0)
	{
		std::cout << "\nTest Failed\n";
	}

	std::cout << "----------------------------\n";
	std::cout << "Float Constructor ";
	vector3One = { 7.8f, -4.3f, 1.3f };
	std::cout << "\nExpected result : ( 7.8 ,  -4.3 , 1.3 )";
	std::cout << "\nActual result : " + std::to_string(vector3One.x) << " , " + std::to_string(vector3One.y) << " , " + std::to_string(vector3One.z);
	std::cout << "\n----------------------------\n";

	std::cout << "Dual Vector Constructor ";
	vector3One = { 1.3, -4.3f, 7.8f };
	vector3Two = { -6.3f, 5.25f, 9.2f };
	std::cout << "\nExpected result : ( 1.3,  -4.3,   7.8  )\n( -6.3, 5.25,  9.2 );";
	std::cout << "\nActual result : " + std::to_string(vector3One.x) << " , " + std::to_string(vector3One.y) +
		"\n" + std::to_string(vector3Two.x) << " , " + std::to_string(vector3Two.y) << " , " + std::to_string(vector3One.z);
	std::cout << "\n----------------------------\n\n";


	std::cout << "\n----------------------------\n";
	std::cout << "Vector addition          ";
	vector3One = { 1.0f, 2.0f, 3.0f };
	vector3Two = { 5.0f, 6.0f, 7.0f };
	std::cout << "\nExpected result : ( 6.0     ,8.0    , 10.0) \nActual result : ";
	vector3Result = vector3One + vector3Two;
	std::cout << vector3Result.ToString() << std::endl;
	std::cout << "----------------------------" << std::endl;

	std::cout << "Vector subtraction        " << std::endl;
	vector3One = { 7.0f, 3.0f, 2.0f };
	vector3Two = { 3.0f, 5.0f, 4.0f };
	std::cout << "( 4.0     ,-2.0    ,-2.0 )" << std::endl;
	vector3Result = vector3One - vector3Two;
	std::cout << vector3Result.ToString() << std::endl;
	std::cout << "----------------------------" << std::endl;

	std::cout << "Vector multiplication     " << std::endl;
	vector3One = { 5.0f, -2.0f, 27.0 };
	vector3Two = { 2.0f, 3.0f, 4.0 };
	std::cout << "(25.0     ,-10.0    , 135.0  )" << std::endl;
	//vector3Result = vector3One * vector3Two;
	std::cout << vector3Result.ToString() << std::endl;
	std::cout << "----------------------------" << std::endl;

	std::cout << "Vector double multiplication     " << std::endl;
	vector3One = { 5.0f, -2.0f,  27.0 };
	std::cout << "(25.0     ,-10.0      )" << std::endl;
	vector3Result = vector3One * 9.372;
	std::cout << vector3Result.ToString() << std::endl;
	std::cout << "----------------------------" << std::endl;

	std::cout << "Vector float multiplication     " << std::endl;
	vector3One = { 5.0f, -2.0f,  27.0 };
	std::cout << "(25.0     ,-10.0      )" << std::endl;
	vector3Result = vector3One * 5.5f;
	std::cout << vector3Result.ToString() << std::endl;
	std::cout << "----------------------------" << std::endl;

	std::cout << "Vector int multiplication     " << std::endl;
	vector3One = { 5.0f, -2.0f,  27.0 };
	std::cout << "(25.0     ,-10.0      )" << std::endl;
	vector3Result = vector3One * 3;
	std::cout << vector3Result.ToString() << std::endl;
	std::cout << "----------------------------" << std::endl;

	std::cout << "Negative vector operator " << std::endl;
	vector3One = { 12.5f, 16.0f, -8.0f};
	std::cout << "(-12.5     ,-16     , 8  )" << std::endl;
	vector3Result = vector3One * -1;
	std::cout << vector3Result.ToString() << std::endl;
	std::cout << "----------------------------" << std::endl;

	std::cout << "Vector length            " << std::endl;
	vector3One = { 5.0f, 10.0f, 15.0f };
	std::cout << "( 18.708 \t\t)\n";
	resultFloat = vector3One.Length();
	std::cout << std::to_string(resultFloat) << std::endl;
	std::cout << "----------------------------" << std::endl;

	std::cout << "Vector length squared     " << std::endl;
	vector3One = { 7.0f, 8.0f, 9.0f };
	std::cout << "( 194       \t\t)\n";
	resultFloat = vector3One.LengthSquared();
	std::cout << std::to_string(resultFloat) << std::endl;
	std::cout << "----------------------------" << std::endl;

	std::cout << "Normalise Vector          " << std::endl;
	vector3One = { 7.0f, 3.0f, 2.0f };
	std::cout << "( 0.889, 0.381, 0.254 )\n";
	vector3One.Normalise();
	std::cout << vector3One.ToString() << std::endl;
	std::cout << "----------------------------" << std::endl;














	std::cout << "\n\n\n" +vector2One.ToString();
	



	system("PAUSE"); 
}

