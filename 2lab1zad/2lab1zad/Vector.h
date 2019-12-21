#pragma once
#include "Matrix.h"

class Vector
{
private:
	double* arrayVect;
	int size, x, y;
	double** arrayMat;
public:
	Vector(double** array, int a, int b);
	Vector(int Size);
	void print();
	void inic();
	double& operator[](int index);
	friend const Vector& operator++(const Vector& v);
	friend const Vector& operator++(const Vector& v, int);
	friend const Vector& operator--(const Vector& v);
	friend const Vector& operator--(const Vector& v, int);

	int getSize();
};

