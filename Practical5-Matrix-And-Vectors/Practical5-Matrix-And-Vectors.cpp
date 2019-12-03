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
	std::cout << "Vector 2 Default Constructor ";
	std::cout << "\nExpected result : ( 0 ,    0 )";
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
	std::cout << "\nExpected result : ( 7.8 ,     -4.3 )";
	std::cout << "\nActual result : " + std::to_string(vector2One.x) << " , " + std::to_string(vector2One.y);
	std::cout << "\n----------------------------\n";

	std::cout << "Dual Vector Constructor ";
	vector2One = { -4.3f, 7.8f };
	vector2Two = { -6.3f, 5.25f };
	std::cout << "\nExpected result : ( -4.3,    7.8  )\n( -6.3f,     5.25f );";
	std::cout << "\nActual result : " + std::to_string(vector2One.x) << " , " + std::to_string(vector2One.y) +
		"\n" + std::to_string(vector2Two.x) << " , " + std::to_string(vector2Two.y);
	std::cout << "\n----------------------------\n";

	std::cout << "\n----------------------------\n";
	std::cout << "Vector2 addition          ";
	vector2One = { 1.0f, 2.0f };
	vector2Two = { 5.0f, 6.0f };
	std::cout << "\nExpected result : ( 6.0        ,8.0  ) \nActual result : ";
	vector2Result = vector2One + vector2Two;
	std::cout << vector2Result.ToString() << std::endl;
	std::cout << "----------------------------" << std::endl;

	std::cout << "Vector2 subtraction        " << std::endl;
	vector2One = { 7.0f, 3.0f };
	vector2Two = { 3.0f, 5.0f };
	std::cout << "( 4.0      ,-2.0    )" << std::endl;
	vector2Result = vector2One - vector2Two;
	std::cout << vector2Result.ToString() << std::endl;
	std::cout << "----------------------------" << std::endl;

	std::cout << "Vector2 vector multiplication     " << std::endl;
	vector2One = { 37.0f, -4.0f };
	std::cout << "( 91     )" << std::endl;
	resultFloat = vector2One * vector2Two;
	std::cout << std::to_string(resultFloat) << std::endl;
	std::cout << "----------------------------" << std::endl;

	std::cout << "Vector2 double multiplication     " << std::endl;
	vector2One = { 5.0f, -2.0f };
	std::cout << "( 36.162      ,-14.464     )" << std::endl;
	vector2Result = vector2One * 7.23245;
	std::cout << vector2Result.ToString() << std::endl;
	std::cout << "----------------------------" << std::endl;

	std::cout << "Vector2 float multiplication     " << std::endl;
	vector2One = { 5.0f, -2.0f };
	std::cout << "( 61.350      ,-24.540      )" << std::endl;
	vector2Result = vector2One * 12.27f;
	std::cout << vector2Result.ToString() << std::endl;
	std::cout << "----------------------------" << std::endl;

	std::cout << "Vector2 int multiplication     " << std::endl;
	vector2One = { 5.0f, -2.0f };
	std::cout << "(25.0      ,-10.0      )" << std::endl;
	vector2Result = vector2One * 5;
	std::cout << vector2Result.ToString() << std::endl;
	std::cout << "----------------------------" << std::endl;

	std::cout << "Negative vector2 operator " << std::endl;
	vector2One = { 12.5f, 16.0f };
	std::cout << "(-12.5      , -16       )" << std::endl;
	vector2Result = vector2One * -1;
	std::cout << vector2Result.ToString() << std::endl;
	std::cout << "----------------------------" << std::endl;

	std::cout << "Vector2 length            " << std::endl;
	vector2One = { 5.0f, 10.0f };
	std::cout << "( 11.180 \t\t)\n";
	resultFloat = vector2One.Length();
	std::cout << std::to_string(resultFloat) << std::endl;
	std::cout << "----------------------------" << std::endl;

	std::cout << "Vector2 length squared     " << std::endl;
	vector2One = { 7.0f, 8.0f };
	std::cout << "( 113       \t\t)\n";
	resultFloat = vector2One.LengthSquared();
	std::cout << std::to_string(resultFloat) << std::endl;
	std::cout << "----------------------------" << std::endl;

	std::cout << "Normalise Vector2          " << std::endl;
	vector2One = { 7.0f, 3.0f };
	std::cout << "( 0.919,     0.393 )\n";
	vector2One.Normalise();
	std::cout << vector2One.ToString() << std::endl;
	std::cout << "----------------------------\n\n";

	system("PAUSE");
	






	//----------------------------------------------------------------------------------

	Vector3 vector3One{};
	Vector3 vector3Two{};
	Vector3 vector3Result{};

	std::cout << "\n\n\n\n----------------------------\n";
	std::cout << "Vector 3 Default Constructor ";
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
	std::cout << "Vector 3 Float Constructor ";
	vector3One = { 7.8f, -4.3f, 1.3f };
	std::cout << "\nExpected result : ( 7.8 ,  -4.3 , 1.3 )";
	std::cout << "\nActual result : " + std::to_string(vector3One.x) << " , " + std::to_string(vector3One.y) << " , " + std::to_string(vector3One.z);
	std::cout << "\n----------------------------\n";

	std::cout << "Vector 3 Dual Vector Constructor ";
	vector3One = { 1.3, -4.3f, 7.8f };
	vector3Two = { -6.3f, 5.25f, 9.2f };
	std::cout << "\nExpected result : ( 1.3,  -4.3,   7.8  )\n( -6.3, 5.25,  9.2 );";
	std::cout << "\nActual result : " + std::to_string(vector3One.x) << " , " + std::to_string(vector3One.y) << " , " + std::to_string(vector3One.z) +
		"\n" + std::to_string(vector3Two.x) << " , " + std::to_string(vector3Two.y) << " , " + std::to_string(vector3Two.z);
	std::cout << "\n----------------------------";


	std::cout << "\n----------------------------\n";
	std::cout << "Vector 3 addition          ";
	vector3One = { 1.0f, 2.0f, 3.0f };
	vector3Two = { 5.0f, 6.0f, 7.0f };
	std::cout << "\nExpected result : ( 6.0     \t,8.0    \t,10.0) \nActual result : ";
	vector3Result = vector3One + vector3Two;
	std::cout << vector3Result.ToString() << std::endl;
	std::cout << "----------------------------" << std::endl;

	std::cout << "Vector 3 subtraction        " << std::endl;
	vector3One = { 7.0f, 3.0f, 2.0f };
	vector3Two = { 3.0f, 5.0f, 4.0f };
	std::cout << "( 4.0     \t,-2.0    \t,-2.0 )" << std::endl;
	vector3Result = vector3One - vector3Two;
	std::cout << vector3Result.ToString() << std::endl;
	std::cout << "----------------------------" << std::endl;

	std::cout << "Vector 3 vector multiplication     " << std::endl;
	vector3One = { 5.0f, -2.0f, 27.0 };
	vector3Two = { 2.0f, 3.0f, 4.0 };
	std::cout << "(112.0  )" << std::endl;
	resultFloat = vector3One * vector3Two;
	std::cout << std::to_string(resultFloat) << std::endl;
	std::cout << "----------------------------" << std::endl;

	std::cout << "Vector 3 double multiplication     " << std::endl;
	vector3One = { 5.0f, -2.0f,  27.0 };
	std::cout << "(46.86     \t,-18.744      \t,253.044)" << std::endl;
	vector3Result = vector3One * 9.372;
	std::cout << vector3Result.ToString() << std::endl;
	std::cout << "----------------------------" << std::endl;

	std::cout << "Vector 3 float multiplication     " << std::endl;
	vector3One = { 5.0f, -2.0f,  27.0 };
	std::cout << "(27.5     \t,-11.0     \t,148.5  )" << std::endl;
	vector3Result = vector3One * 5.5f;
	std::cout << vector3Result.ToString() << std::endl;
	std::cout << "----------------------------" << std::endl;

	std::cout << "Vector 3 int multiplication     " << std::endl;
	vector3One = { 5.0f, -2.0f,  27.0 };
	std::cout << "(15     \t,-6     \t,81  )" << std::endl;
	vector3Result = vector3One * 3;
	std::cout << vector3Result.ToString() << std::endl;
	std::cout << "----------------------------" << std::endl;

	std::cout << "Negative vector 3 operator " << std::endl;
	vector3One = { 12.5f, 16.0f, -8.0f};
	std::cout << "(-12.5     \t,-16     \t,8  )" << std::endl;
	vector3Result = vector3One * -1;
	std::cout << vector3Result.ToString() << std::endl;
	std::cout << "----------------------------" << std::endl;

	std::cout << "Vector 3 length            " << std::endl;
	vector3One = { 5.0f, 10.0f, 15.0f };
	std::cout << "( 18.708 \t)\n";
	resultFloat = vector3One.Length();
	std::cout << std::to_string(resultFloat) << std::endl;
	std::cout << "----------------------------" << std::endl;

	std::cout << "Vector 3 length squared     " << std::endl;
	vector3One = { 7.0f, 8.0f, 9.0f };
	std::cout << "( 194.00       \t)\n";
	resultFloat = vector3One.LengthSquared();
	std::cout << std::to_string(resultFloat) << std::endl;
	std::cout << "----------------------------" << std::endl;

	std::cout << "Normalise Vector 3         " << std::endl;
	vector3One = { 7.0f, 3.0f, 2.0f };
	std::cout << "( 0.889, \t0.381, \t\t0.254 )\n";
	vector3One.Normalise();
	std::cout << vector3One.ToString() << std::endl;
	std::cout << "----------------------------\n" << std::endl;

	system("PAUSE");







	//----------------------------------------------------------------------------------


	Matrix3 matrix3One{};
	Matrix3 matrix3Two{};
	Matrix3 matrix3Result{};



	std::cout << "\n\n\n\n\n\nMatrix 3 Null/default constructor" << std::endl;
	std::cout << " Expected result : \n";
	std::cout << " 0.0     ,0.0     ,0.0     " << std::endl;
	std::cout << " 0.0     ,0.0     ,0.0     " << std::endl;
	std::cout << " 0.0     ,0.0     ,0.0     " << std::endl;
	std::cout << " Actual result : ";
	std::cout << matrix3One.ToString() << std::endl;
	std::cout << "-------------------------------\n\n";

	std::cout << "Matrix 3 Vector 3 constructor" << std::endl;
	std::cout << " Expected result : \n";
	std::cout << " 0.889     ,0.381     ,0.254     " << std::endl;
	std::cout << " 2.0       ,3.0       ,4.0     " << std::endl;
	std::cout << " 0.889     ,0.381     ,0.254     " << std::endl;
	std::cout << " Actual result : ";
	matrix3One = { vector3One.x, vector3One.y, vector3One.z, vector3Two.x, vector3Two.y, vector3Two.z,  vector3One.x, vector3One.y, vector3One.z };
	std::cout << matrix3One.ToString() << std::endl;
	std::cout << "--------------------------------------------\n";

	std::cout << "Matrix 3 float constructor" << std::endl;
	std::cout << " Expected result : \n";
	std::cout << " 6.0     ,4.0     ,3.0     " << std::endl;
	std::cout << " 8.0     ,5.0     ,3.0     " << std::endl;
	std::cout << " 7.0     ,3.0     ,9.0     " << std::endl;
	std::cout << " Actual result : ";
	matrix3One = { 6.0f, 4.0f, 3.0f, 8.0f, 5.0f, 3.0f, 7.0f, 3.0f, 9.0f };
	std::cout << matrix3One.ToString() << std::endl;
	std::cout << "--------------------------------------------\n";


	std::cout << "Matrix 3 product matrix by vector" << std::endl;
	std::cout << " Expected result : \n";
	std::cout << " 7.620     ,9.779     ,9.652     " << std::endl;
	vector3Result = matrix3One * vector3One;
	std::cout << " Actual result : \n";
	std::cout << vector3Result.ToString() << std::endl;
	std::cout << "--------------------------------------------\n";

	std::cout << "Matrix 3 product of two matrix" << std::endl;
	std::cout << " Expected result : \n";
	std::cout << " 75.0     ,74.0     ,52.0     " << std::endl;
	std::cout << " 97.0     ,89.0     ,63.0     " << std::endl;
	std::cout << " 83.0     ,122.0     ,71.0     " << std::endl;
	matrix3Two = { 8.0, 5.0, 2.0, 6.0, 5.0, 7.0, 1.0, 8.0, 4.0 };
	matrix3Result = matrix3One * matrix3Two;
	std::cout << " Actual result : ";
	std::cout << matrix3Result.ToString() << std::endl;
	std::cout << "--------------------------------------------\n";


	//Matrix transpose function testing
	matrix3One = { 6.0, 4.0, 3.0, 8.0, 5.0, 3.0, 7.0, 3.0, 9.0 };
	std::cout << "\n Matrix transpose " << std::endl;
	std::cout << " Expected result : \n";
	std::cout << " 6, 8, 7" << std::endl;
	std::cout << " 4, 5, 3" << std::endl;
	std::cout << " 3, 3, 9" << std::endl;
	matrix3Result = matrix3One.Transpose(matrix3One);
	std::cout << " Actual result : ";
	std::cout << matrix3Result.ToString() << std::endl;
	std::cout << "--------------------------------------------\n\n";

	//Addition matrix operator testing
	matrix3One = { 3.0, 2.0, 1.0, 1.0, 2.0, 3.0, 7.0, 4.0, 9.0 };
	matrix3Two = { 8.0, 5.0, 2.0, 6.0, 5.0, 7.0, 1.0, 8.0, 4.0 };
	std::cout << " Matrix addition " << std::endl;
	std::cout << " Expected result : \n";
	std::cout << " 11, 7,  3" << std::endl;
	std::cout << " 7,  7,  10" << std::endl;
	std::cout << " 8,  12, 13" << std::endl;
	matrix3Result = matrix3One + matrix3Two;
	std::cout << " Actual result : ";
	std::cout << matrix3Result.ToString() << std::endl;
	std::cout << "--------------------------------------------\n\n";



	//Subtraction matrix operator testing
	matrix3One = { 3.0, 2.0, 1.0, 1.0, 2.0, 3.0, 7.0, 4.0, 9.0 };
	matrix3Two = { 8.0, 5.0, 2.0, 6.0, 5.0, 7.0, 1.0, 8.0, 4.0 };
	std::cout << " Matrix subtraction " << std::endl;
	std::cout << " Expected result : \n";
	std::cout << " -5, -3, -1" << std::endl;
	std::cout << " -5, -3, -4" << std::endl;
	std::cout << "  6, -4,  5" << std::endl;
	matrix3Result = matrix3One - matrix3Two;
	std::cout << " Actual result : ";
	std::cout << matrix3Result.ToString() << std::endl;
	std::cout << "--------------------------------------------\n\n\n\n";


	//Matrix scaling testing
	std::cout << " Matrix scaling\n";
	std::cout << " Expected result : ";
	std::cout << " 0.35,   0.35,   0.49 \n";
	std::cout << " Actual result : ";
	Vector3 scalingVector = { 5.0, 5.0, 7.0 };
	scalingVector = Matrix3::Scale3D(7) * scalingVector;
	std::cout << scalingVector.ToString() << std::endl;
	std::cout << "--------------------------------------------\n\n";


	//Matrix determinant function testing
	matrix3One = { 7.0, 4.0, 9.0, 3.0, 9.0, 8.0, 4.0, 7.0, 3.0 };
	std::cout << " Matrix determinant " << std::endl;
	std::cout << " Expected result : ";
	std::cout << " -246 " << std::endl;
	resultFloat = Matrix3::Determinant(matrix3One);
	std::cout << " Actual result : ";
	std::cout << resultFloat << std::endl;
	std::cout << "--------------------------------------------\n\n";


	//Matrix row function testing
	matrix3One = { 1.0, 2.0, 3.0, 4.0, 5.0, 6.0, 7.0, 8.0, 9.0 };
	Vector3 row1 = matrix3One.Row(0);
	Vector3 row2 = matrix3One.Row(1);
	Vector3 row3 = matrix3One.Row(2);
	std::cout << "\n Matrix row " << std::endl;
	std::cout << " Expected result : ";
	std::cout << " 1, 2, 3" << std::endl;
	std::cout << " Actual result : ";
	std::cout << row1.ToString() << std::endl;
	std::cout << " Expected result : ";
	std::cout << " 4, 5, 6" << std::endl;
	std::cout << " Actual result : ";
	std::cout << row2.ToString() << std::endl;
	std::cout << " Expected result : ";
	std::cout << " 7, 8, 9" << std::endl;
	std::cout << " Actual result : ";
	std::cout << row3.ToString() << std::endl;
	std::cout << "--------------------------------------------\n\n";


	//Matrix column function testing
	matrix3One = { 1.0, 2.0, 3.0, 4.0, 5.0, 6.0, 7.0, 8.0, 9.0 };
	Vector3 column1 = matrix3One.Column(0);
	Vector3 column2 = matrix3One.Column(1);
	Vector3 column3 = matrix3One.Column(2);
	std::cout << " Matrix column " << std::endl;
	std::cout << " Expected result : ";
	std::cout << " 1, 4, 7" << std::endl;
	std::cout << " Actual result : ";
	std::cout << column1.ToString() << std::endl;
	std::cout << " Expected result : ";
	std::cout << " 2, 5, 8" << std::endl;
	std::cout << " Actual result : ";
	std::cout << column2.ToString() << std::endl;
	std::cout << " Expected result : ";
	std::cout << " 3, 6, 9" << std::endl;
	std::cout << " Actual result : ";
	std::cout << column3.ToString() << std::endl;
	std::cout << "--------------------------------------------\n\n";



	//Matrix inverse function testing
	matrix3One = { 1.0, 1.0, 1.0, 1.0, 1.0, 0.0, 0.0, 1.0, 1.0 };
	std::cout << " Matrix inverse " << std::endl;
	std::cout << " Expected result : \n";
	std::cout << " 1, 0, -1" << std::endl;
	std::cout << " -1, 1, 1" << std::endl;
	std::cout << " 1, -1, 0" << std::endl;
	matrix3Result = Matrix3::Inverse(matrix3One);
	std::cout << " Actual result : ";
	std::cout << matrix3Result.ToString() << std::endl;
	std::cout << "--------------------------------------------\n\n";



	//Matrix full rotation function testing
	std::cout << "\n Matrix rotation\n";
	std::cout << " Expected result : \n";
	std::cout << " 0.0, 2.591, 5.948 \n";
	std::cout << " 1.163, 0.0, 3.479 \n";	
	std::cout << " -2.533,  7.254,   0.0 \n";
	std::cout << " Actual result : \n";
	Vector3 rotationXvector = { 0.0, 2.7, 5.9 };
	rotationXvector = Matrix3::RotationX(1.0472) * rotationXvector;
	Vector3 rotationYvector = { 1.1, 0, 3.5 };
	rotationYvector = Matrix3::RotationY(1.0472) * rotationYvector;
	Vector3 rotationZvector = { -2.4, 7.3, 0 };
	rotationZvector = Matrix3::RotationZ(1.0472) * rotationZvector;

	std::cout << rotationXvector.ToString() << std::endl;
	std::cout << rotationYvector.ToString() << std::endl;
	std::cout << rotationZvector.ToString() << std::endl;
	std::cout << "--------------------------------------------\n\n";



	//Matrix translation testing
	std::cout << "\n Matrix translation\n";
	std::cout << " Expected result : \n";
	std::cout << " 1.0,   0.0,   0.0 \n";
	std::cout << " 0.0,   1.0,   0.0 \n";
	std::cout << " 4.7,   7.3,   1.0 \n";
	std::cout << " Actual result : ";
	Matrix3 translationMatrix;
	translationMatrix = Matrix3::Translate(4.7f, 7.3f);
	std::cout << translationMatrix.ToString() << std::endl;
	std::cout << "--------------------------------------------\n\n";


	//Matrix scaling testing
	std::cout << " Matrix scaling\n";
	std::cout << " Expected result : ";
	std::cout << " 0.35,   0.35,   0.49 \n";
	std::cout << " Actual result : ";
	scalingVector = { 5.0, 5.0, 7.0 };
	scalingVector = Matrix3::Scale3D(7) * scalingVector;
	std::cout << scalingVector.ToString() << std::endl;
	std::cout << "--------------------------------------------\n\n";


	//Matrix inverse function testing
	matrix3One = { 1.0, 1.0, 1.0, 1.0, 1.0, 0.0, 0.0, 1.0, 1.0 };
	std::cout << " Matrix inverse " << std::endl;
	std::cout << " Expected result : \n";
	std::cout << " 1, 0, -1" << std::endl;
	std::cout << " -1, 1, 1" << std::endl;
	std::cout << " 1, -1, 0" << std::endl;
	matrix3Result = Matrix3::Inverse(matrix3One);
	std::cout << " Actual result : ";
	std::cout << matrix3Result.ToString() << std::endl;
	std::cout << "--------------------------------------------\n\n";




	//Matrix x axis rotation function testing
	std::cout << "\n Matrix rotation in x axis\n";
	std::cout << " Expected result : ";
	std::cout << " 0,0, -2.812, 6.149 \n";
	std::cout << " Actual result : ";
	rotationXvector = { 0.0, -2.7, 6.2 };
	rotationXvector = Matrix3::RotationX(1.0472) * rotationXvector;
	std::cout << rotationXvector.ToString() << std::endl;
	std::cout << "--------------------------------------------\n\n";

	//Matrix y axis rotation function testing
	std::cout << " Matrix rotation in y axis\n";
	std::cout << " Expected result : ";
	std::cout << " 0.566, 0.0, 17.322 \n";
	std::cout << " Actual result : ";
	rotationYvector = { 0.25, 0.0, 17.33 };
	rotationYvector = Matrix3::RotationY(1.0472) * rotationYvector;
	std::cout << rotationYvector.ToString() << std::endl;
	std::cout << "--------------------------------------------\n\n";

	//Matrix z axis rotation function testing
	std::cout << " Matrix rotation in z axis\n";
	std::cout << " Expected result :";
	std::cout << " -5.188,  -0.664,   88.199 \n";
	std::cout << " Actual result : ";
	rotationZvector = { -5.2, -0.57, 88.2 };
	rotationZvector = Matrix3::RotationZ(1.0472) * rotationZvector;
	std::cout << rotationZvector.ToString() << std::endl;
	std::cout << "--------------------------------------------\n\n";


	std::cout << " Matrix scaling\n";
	std::cout << " Expected result : ";
	std::cout << " 2.940, 0.029, 2.969 \n";
	std::cout << " Actual result : ";
	scalingVector = { 42.0, 0.42, 42.42 };
	scalingVector = Matrix3::Scale3D(7) * scalingVector;
	std::cout << scalingVector.ToString() << std::endl;
	std::cout << "--------------------------------------------\n\n";

	system("PAUSE"); 








	//-------------------------------------------------------------------------------------------------


	Vector3 v1{ 0,2,-5 };
	Vector3 v2{ -2,-2,5 };
	Vector3 v3{ 2,-2,-5 };

	


	std::cout << "\n\n\n\n\n\n----------------------------\n";
	std::cout << "Extra tests on v1, v2 and v3 \n\n";


	std::cout << "Length of v1          " << std::endl;
	std::cout << " Expected result : ";
	std::cout << "( 5.385 \t)\n";
	std::cout << " Actual result : ";
	resultFloat = v1.Length();
	std::cout << std::to_string(resultFloat) << std::endl;
	std::cout << "----------------------------" << std::endl;

	std::cout << "Length squared of v2    " << std::endl;
	vector3One = { 7.0f, 8.0f, 9.0f };
	std::cout << " Expected result : ";
	std::cout << "( 33.00 \t)\n";
	std::cout << " Actual result : ";
	resultFloat = v2.LengthSquared();
	std::cout << std::to_string(resultFloat) << std::endl;
	std::cout << "----------------------------" << std::endl;

	std::cout << " V3 Matrix rotation in z axis by 23.21 \n ";
	std::cout << " Expected result : ";
	std::cout << " ( -12.5      , -16.0  \t)\n";
	std::cout << " Actual result : ";
	vector3Result = Matrix3::RotationZ(23.21f) * v3;
	std::cout << vector2Result.ToString();


	std::cout << "\n\n\n\n----------------------------\n";

	system("PAUSE");

}

