#pragma once
#include "Vector.h"

class Matrix
{
private:
	int x, y;
	double** array;
public:
	Matrix(int a, int b);
	void inic();
	double at(int i, int j) const;
	void setAt(int i, int j, double val);
	void print();
	int getSize();
	double** getArray();
	friend const Matrix& operator++(const Matrix& m);
	friend const Matrix& operator++(const Matrix& m, int);
	friend const Matrix& operator--(const Matrix& m);
	friend const Matrix& operator--(const Matrix& m, int);
};
