#include <iostream>
#include "Vector.h"
#include "Matrix.h"

using namespace std;


int main()
{
	int M, N;
	cin >> M >> N;
	cout << "Begin:\n";
	Matrix m(M, N);
	m.inic();
	m.print();
	cout << m.getSize();
	double** array = m.getArray();
	cout << array[2][2];
	Vector v(m.getArray(), M, N);
	v.inic();
	v.print();
	cout << endl;
	
	cout << "Setting value:\n";
	m.setAt(2, 2, 14.78);
	m.print();
	cout << endl;
	cout << "Value: " << m.at(2, 2) << endl;
	cout << endl;

	cout << "Prefikc inkrement:\n";
	++v;
	v.print();
	++m;
	m.print();
	cout << endl;

	cout << "Postfikc inkrement:\n";
	v++;
	v.print();
	m++;
	m.print();
	cout << endl;

	cout << "Prefikc dekrement:\n";
	--v;
	v.print();
	--m;
	m.print();
	cout << endl;

	cout << "Postfikc dekrement:\n";
	v--;
	v.print();
	m--;
	m.print();
	cout << endl;

	cin.get();
	system("pause");
}