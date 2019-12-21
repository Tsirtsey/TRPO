#include "Matrix.h"
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

Matrix::Matrix(int a, int b) : x(a), y(b)
{
	array = new double*[x];
	for (int i = 0; i < x; i++)
		array[i] = new double[y];
}

void Matrix::inic()
{
	for (int i = 0; i < x; i++) {
		for (int j = 0; j < y; j++) {

			array[i][j] = sin(i - j) + cos(i + j);
		}
	}
}

int Matrix::getSize()
{
	return x* y; 
}

double** Matrix::getArray()
{
	return array;
}


double Matrix::at(int i, int j) const
{
	return array[i][j];
}

void Matrix::setAt(int i, int j, double val)
{
	array[i][j] = val;
}

void Matrix::print()
{
	cout << "[\n";
	for (int i = 0; i < x; i++) {
		for (int j = 0; j < y; j++) {
			cout << setw(10) << array[i][j];
		}

		i == x - 1 ? cout << setw(10) << "]\n" : cout << "\n";
	}
}



/////////////////////////////////////////////////////////////////////////////////////////////////////
const Matrix& operator++(const Matrix& m)
{
	for (int i = 0; i < m.x; i++)
		for (int j = 0; j < m.y; j++)
			m.array[i][j]++;

	return m;
}

const Matrix& operator++(const Matrix& m, int)
{
	Matrix OldValues(m.x, m.y);

	for (int i = 0; i < m.x; i++)
		for (int j = 0; j < m.y; j++)
		{
			OldValues.array[i][j] = m.array[i][j];
			m.array[i][j]++;
		}

	return OldValues;
}

const Matrix& operator--(const Matrix& m)
{
	for (int i = 0; i < m.x; i++)
		for (int j = 0; j < m.y; j++)
			m.array[i][j]--;

	return m;
}

const Matrix& operator--(const Matrix& m, int)
{
	Matrix OldValues(m.x, m.y);

	for (int i = 0; i < m.x; i++)
		for (int j = 0; j < m.y; j++)
		{
			OldValues.array[i][j] = m.array[i][j];
			m.array[i][j]--;
		}

	return OldValues;
}
