#include "Vector.h"
#include <iostream>
#include "Matrix.h"

using namespace std;

Vector::Vector(double** array, int a, int b)
{
	arrayMat = array;
	x = a;
	y = b;
	size = x*y;
	arrayVect = new double[size];
}


void Vector::print()
{
	cout << "\n[";

	for (int i = 0; i < size; i++) {
		cout << " " << arrayVect[i];
		//delete[]ary1[i];
	}
}

void Vector::inic()
{
	int k = 0;
	for (int i = 0; i < y; i++) {
		for (int j = 0; j < x; j++) {

			arrayVect[k] = arrayMat[j][i];
			k++;
		}
	}
}

double& Vector::operator[](int index)
{
	return arrayVect[index];
}



Vector::Vector(int Size) : size(Size)
{
	arrayVect = new double[size];
}

////////////////////////////////////////////////////////////////////////////////////////////////////
const Vector& operator++(const Vector& v)
{
	for (int i = 0; i < v.size; i++)
		v.arrayVect[i]++;

	return v;
}

const Vector& operator++(const Vector& v, int)
{
	Vector OldValues(v.size);

	for (int i = 0; i < v.size; i++)
	{
		OldValues.arrayVect[i] = v.arrayVect[i];
		v.arrayVect[i]++;
	}

	return OldValues;
}

const Vector& operator--(const Vector& v)
{
	for (int i = 0; i < v.size; i++)
		v.arrayVect[i]--;

	return v;
}

const Vector& operator--(const Vector& v, int)
{
	Vector OldValues(v.size);

	for (int i = 0; i < v.size; i++)
	{
		OldValues.arrayVect[i] = v.arrayVect[i];
		v.arrayVect[i]--;
	}

	return OldValues;

}
